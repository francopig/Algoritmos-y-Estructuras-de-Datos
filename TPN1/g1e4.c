#include <stdio.h>


int main (){
	int a,b;
	int calculo;
	
	printf("Ingresar 2 valores: \n");
	scanf("%i %i", &a, &b);
	
	calculo = (a+b) * (a-b);
	printf ("El resultado del calculo es: %i", calculo);
	return 0;
}
