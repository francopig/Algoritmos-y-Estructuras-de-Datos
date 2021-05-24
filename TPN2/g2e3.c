#include <stdio.h>

//3-LEER TRES NÚMEROS Y MOSTRAR UN MENSAJE SI SE ENCUENTRAN EN ORDEN 
//ASCENDENTE.

int main(){
	int n1,n2,n3;
	
	printf("Ingresar 3 numeros: \n");
	scanf("%i %i %i", &n1, &n2, &n3);
	
	if((n1 > n2) && (n2 > n3)){
		printf("estan en orden ascendente");
	}

	return 0;
}
