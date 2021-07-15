#include <stdio.h>

int main () {
	int a,b,c,suma;
	
	printf("Ingresar 3 numeros para sumarlos: \n");
	scanf("%i %i %i", &a,&b,&c);
	
	suma = a + b + c;
	printf("la suma es: %i", suma);	
		
	return 0;
}
