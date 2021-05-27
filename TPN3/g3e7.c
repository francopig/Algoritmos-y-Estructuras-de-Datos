#include <stdio.h>

//7. ESCRIBIR UNA FUNCIÓN LLAMADA "EDADES" QUE RECIBA 2 EDADES Y DECIR CUÁL DE 
//ELLAS ES LA MAYOR Y CUANTO LE FALTA A LA MENOR PARA LLEGAR A LA EDAD MAYOR.
void edades (int e1, int e2);
int main(){
	int edad1, edad2;
	
	printf("Ingresar las dos edades: \n");
	scanf("%i %i", &edad1, &edad2);
	edades(edad1, edad2);
	
	return 0;
}

void edades (int e1, int e2){
	int diferencia;
	
	if (e1>e2){
		printf("la edad 1 es mayor \n");
		diferencia = e1 - e2;
		printf("Le falta %i para llegar a la mayor",diferencia);
	}else{
		printf("la edad 2 es mayor \n");
		diferencia = e2 - e1;
		printf("Le falta %i para llegar a la mayor",diferencia);
	}
}
