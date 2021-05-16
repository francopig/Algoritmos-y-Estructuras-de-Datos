#include <stdio.h>

int main (){
	
	int base, exponente;
	int acumulador;
	printf("Ingresar base y exponente: \n");
	fflush(stdin);
	scanf ("%i %i", &base, &exponente);
	
	acumulador = base;
	int i;
	for (i=1; i < exponente; i++){
		acumulador = acumulador * base; // 2*2*2*2*2
	}
	
	printf ("Resultado: %i", acumulador);
}
