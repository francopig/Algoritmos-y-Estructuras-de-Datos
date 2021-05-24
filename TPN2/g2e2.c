#include <stdio.h>

//2-DADOS 2 NÚMEROS SI EL PRIMERO ES MAYOR QUE EL SEGUNDO RESTARLOS SINO 
//MULTIPLICARLOS. INFORMAR EL RESULTADO

int main() {
	int numero1;
	int numero2;
	int resultado;
	
	printf("Ingrese 2 numeros: \n");
	scanf("%i %i", &numero1, &numero2);
	
	if (numero1 > numero2){
		resultado = numero1 - numero2;
	} else{
		resultado = numero1 * numero2;
	}
	
	printf("El resultado es: %i ", resultado);
	
	
 	return 0;
 	
 	
}
