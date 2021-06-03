#include <stdio.h>

int multa (int pasajeros);
void informeFinal (int liniers, int totalMultas, int cR, int cP, int cN, int porcentaje);

int main (){
	
	int continuar;
	char patente[10];
	char permiso,acceso;
	int dni, ocupantes, multasLiniers, valorMulta, multasTotales;
	int retenidosR, retenidosP, retenidosN;
	int autosTotales, autosRetenidos;
	float porcentajeInfraccion;
	
    multasLiniers=0; multasTotales=0;
	retenidosR=0; retenidosP=0; retenidosN=0;
	autosTotales=0; autosRetenidos=0;
	porcentajeInfraccion=0;
	
	printf("Desea procesar datos? 1=si | 2=no  \n");
	scanf("%i", &continuar);
	
	while (continuar == 1){
		
		printf("Ingresar patente del vehiculo: \n");
		scanf("%s", &patente);
	
		printf("Tiene permiso? s/n \n");
		fflush(stdin);//necesario o se saltea
		scanf("%c", &permiso);
	
		if(permiso == 'n'){
		
			printf("Ingresar dni del conductor: \n");
			scanf("%i", &dni);
		
			printf("Ingresar cantidad de ocupantes: \n");
			scanf("%i", &ocupantes);	
			
			printf("Ingresar acceso donde se comitio infraccion: r/p/n \n");
			fflush(stdin); //necesario
			scanf("%c", &acceso);
			
			printf("patente ingresada: %s \n", patente);
			printf("dni ingresada: %i \n", dni);
			switch(acceso){ 
				case 'r':
					printf("Acceso de la infraccion: Liniers \n");
					retenidosR += 1; //punto c
					break;
				
				case 'p':
					printf("Acceso de la infraccion: Constitucion \n");
					retenidosP += 1; //punto c
					break;
				
				case 'n':
					printf("Acceso de la infraccion: Lugano \n");
					retenidosN += 1; //punto c
					break;
			}
			
			valorMulta = multa(ocupantes); 

			if((valorMulta > 5000) && (acceso == 'r')){ //PUNTO A 
				multasLiniers += 1; 
			}							
			
			multasTotales += valorMulta; // PUNTO B
			
		}
		
		autosTotales += 1; //contador para el punto d
		
		printf("------------- \n");
		printf("Desea registrar más datos? 1/2  \n");
		scanf("%i", &continuar);
	}
	
	autosRetenidos = retenidosR + retenidosN + retenidosP;// contador para el punto D
	porcentajeInfraccion = (autosRetenidos * 100)/ autosTotales; // PUNTO D
    informeFinal (multasLiniers,multasTotales, retenidosR, retenidosP, retenidosN, porcentajeInfraccion);
    
	printf("Fin del programa");
	return 0;
}

int multa (int pasajeros){
	const int MONTO = 5000;
	int costoMulta;

	costoMulta = MONTO * pasajeros;
	if(pasajeros > 1){
		printf("El costo de la multa es de: $%i \n",costoMulta);//solo se informan +5000
		printf("Vehiculo retenido \n");
	}
		
	return costoMulta;
}

void informeFinal (int liniers, int totalMultas, int cR, int cP, int cN, int porcentaje){
	
	printf("######################################\n");
	printf("INFORME FINAL: \n");
	
	printf("A- Cantidad de multas <5000 en Liniers: %i \n", liniers);
	printf("B- Monto total de multas realizadas: %i \n", totalMultas);
	printf("C- Vehiculos retenidos en: Acceso Liniers: %i | Acceso Constitucion: %i | Acceso Lugano: %i \n",cR,cP,cN);
	printf("D- Porcentaje de vehiculos que cometieron infraccion: %% %i \n",porcentaje);
	
}


