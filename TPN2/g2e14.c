#include <stdio.h>

//14-SE REALIZA UNA ENCUESTA ENTRE 100 PERSONAS QUE VOTAN POR LOS CANDIDATOS A
//O B. SE PIDE INFORMAR LOS PORCENTAJES OBTENIDOS POR CADA CANDIDATO.

int main (){
		
	int i,contadorA, contadorB;
	char voto;
	float porcentajeA, porcentajeB;
	contadorA = 0; contadorB = 0;
	
	for (i=0; i < 10; i++){
		printf("\n A quien desea votar? a/b: ");
		fflush(stdin);
		scanf("%c", &voto);
		if (voto == 'a'){
			contadorA += 1;
		}else {
			contadorB += 1;
		}
	}
	
	porcentajeA = ((contadorA*100)/(contadorA+contadorB));
    porcentajeB = ((contadorB*100)/(contadorA+contadorB));
	
	printf("votos de A: %i \n",contadorA);
	printf("votos de B: %i \n",contadorB);
	printf("Porcentaje de votos de A: %% %.2f \n", porcentajeA);
	printf("Porcentaje de votos de B: %% %.2f \n", porcentajeB);

	return 0; 
}
