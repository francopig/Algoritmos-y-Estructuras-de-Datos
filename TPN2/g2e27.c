#include <stdio.h>
#include <string.h>

//27-SE PONEN A LA VENTA LAS ENTRADAS PARA UN PARTIDO DE FÚTBOL INTERNACIONAL,
//CUYO PRECIO DEPENDE DE LA TRIBUNA, ASÍ: TRIBUNA NORTE Y SUR CUESTAN 250 PESOS,
//TRIBUNA ORIENTE CUESTA 450 PESOS Y TRIBUNA OCCIDENTE CUESTA 650 PESOS.
//DISEÑE LA SOLUCIÓN EN UN PROGRAMA QUE CONTROLE LA VENTA DE DICHAS ENTRADAS A 
//FIN DE PODER SABER LA CANTIDAD DE PERSONAS QUE ASISTEN A CADA TRIBUNA, LA 
//CANTIDAD TOTAL DE PERSONAS Y EL MONTO TOTAL RECAUDADO POR LA VENTA DE TODAS 
//LAS ENTRADAS. FINALIZA LA VENTA DE ENTRADAS CUANDO SE INGRESA UNA VENTA A 
//TRIBUNA IGUAL A “ZZZ”

int main(){
	const int NORTE = 250; 
	const int SUR = 250;
	const int ORIENTE = 450;
	const int OCCIDENTE = 650;
	int precio, recaudacionTotal, totalAsistentes;
	int cNorte,cSur,cOriente,cOccidente;
	int tribuna;
	
	totalAsistentes=0; recaudacionTotal=0;
	cNorte=0; cSur=0; cOriente=0; cOccidente=0;
	
	printf("A cual tribuna desea ir? 1=norte 2=sur 3=oriente 4=occidente 0=finalizar \n");
	scanf("%i", &tribuna);
	fflush(stdin);
	while(tribuna != 0){
		
		switch(tribuna){
			case 1:
				precio = NORTE;
				cNorte += 1;
				break;
			
			case 2:
				precio = SUR;
				cSur += 1;
				break;
				
			case 3:
				precio = ORIENTE;
				cOriente += 1;
				break;
				
			case 4:
				precio = OCCIDENTE;
				cOccidente += 1;
				break;
		}
		
		recaudacionTotal += precio;
		totalAsistentes += 1;
		printf("Valor de la entrada: $%i \n",precio);
		printf("############\n");
		printf("A cual tribuna desea ir? 1=norte 2=sur 3=oriente 4=occidente 0=finalizar \n");
		fflush(stdin);
		scanf("%i", &tribuna);
	}
	
	printf("total de asistentes : %i \n", totalAsistentes);
	printf("Total recaudado: %i \n", recaudacionTotal);
	printf("Asistentes de tribuna norte %i: \n",cNorte);
	printf("Asistentes de tribuna sur %i: \n",cSur);
	printf("Asistentes de tribuna oriente %i: \n",cOriente);
	printf("Asistentes de tribuna occidente %i: \n",cOccidente);
	
	printf("fin del programa");
	return 0;
}
