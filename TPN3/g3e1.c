#include <stdio.h>
#include <math.h>

//1-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL 
//NÚMERO BASE Y EL EXPONENTE.
//EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y 
//DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.

int potencia (int base, int exponente);

int main(){
	int base, exponente,resultado;
	printf("Ingresar base: \n");
	scanf("%i", &base);
	printf("Ingresar exponente: \n");
	scanf("%i", &exponente);
	
	resultado = potencia(base,exponente);
	printf("El resultado es: %i", resultado);
	
	return 0;
}

int potencia (int base, int exponente){
	int i, acumulador;
	acumulador = base;
	for (i=1;i < exponente; i++){
		acumulador *= base;
	}
	
	return acumulador;
}
