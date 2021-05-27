#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int costoEstacionamiento (char tipo, char permanencia, int horas); 
void informe (int contador1, int contador2, int contador3);

int main(){
	printf("Comienzo del programa \n");
	
	char continuar[2];
	char tipoVehiculo;
	char permanencia;
	char patente [8];
	int horas, importeEstacionamiento;
	int contadorCamionetas = 0;
	int contadorAutos = 0;
	int contadorMotos = 0;
	
	//Comienzo del ciclo
	printf("Desea procesar datos? si/no: ");
	fflush(stdin);
	scanf("%s",&continuar);
	while (strcmp (continuar, "si") == 0){
		
		//Parte 1 - Recopilación de datos
		
		printf("Ingresar patente del vehiculo: ");
		fflush(stdin);
		scanf("%s",&patente);
		
		printf("Ingresar tipo de vehiculo (c/a/m): ");
        fflush(stdin);
		scanf("%c", &tipoVehiculo);
		
		printf("Pagar por estadia? s/n : ");
		fflush(stdin);
		scanf("%c", &permanencia);
		if (permanencia == 's'){
			horas = 0;
			switch(tipoVehiculo){ //para completar el contador de tipos de vehiculos
				case 'c':
					contadorCamionetas = contadorCamionetas +1;
					break;
				
				case 'a': 
					contadorAutos = contadorAutos +1;
					break;
				
				case 'm':
					contadorMotos = contadorMotos +1;
			}
		}else {
			printf("Ingresar la cantidad de horas de permanencia: ");
			fflush(stdin);
			scanf("%i", &horas);
		};
		
		//Parte 2 - llamo a la funcion que calcula el costo del estacionamiento
		importeEstacionamiento = costoEstacionamiento (tipoVehiculo, permanencia, horas);
		printf ("El importe a pagar es de $ %i \n", importeEstacionamiento);
	
	
		//Parte 3 - Fin del ciclo, pregunto si vuelvo a iterar
		printf("Desea procesar mas datos? si/no: ");
		fflush(stdin);
		scanf("%s", &continuar);
	}
	
	//informe final
	printf("#################################### \n");
	informe(contadorCamionetas, contadorAutos, contadorMotos);

	printf("Fin del programa");
	return 0;
}

int costoEstacionamiento (char tipo, char permanencia, int horas){
	int costo;
	
	if (permanencia == 's'){ 
		switch(tipo){ //caso de estadia
			case 'c':
				costo = 500;
				break;
				
			case 'a':
				costo = 300;
				break;
				
			case 'm':
				costo = 200;
				break;
		}
	}else { 
		switch(tipo){ //caso de horas
			case 'c':
				costo = horas*200;
				break;
			
			case 'a': 
				costo = horas*100;
				break;
			
			case 'm':
				costo = horas*50;
		}
	}	
	
	return costo;
}

void informe (int contador1,int contador2, int contador3)
{
	printf("Contador de camionetas que pagaron por estadia: %i \n",contador1);
	printf("Contador de autos que pagaron por estadia: %i \n",contador2);
	printf("Contador de motos que pagaron por estadia: %i \n",contador3);
}


