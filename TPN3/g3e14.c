#include <stdio.h>

//14. CREAR UNA FUNCIÓN QUE PERMITA CALCULAR EL FACTORIAL DE UN NÚMERO.

int factorial (int n);

int main(){
	int numero;
	
	printf("ingresar un n: \n");
	scanf("%i", &numero);
	
	printf("el factorial es: %i", factorial(numero));
	
	return 0;
}

int factorial (int n){
		
	printf("Entra a la funcion factorial el valor de: %i \n",n);
	if (n > 1){
		printf("la funcion se llama a si mismo otra vez \n");
		return n * factorial(n-1);
	}else
	{
		printf(" N es igual a 1, termina la recursividad \n");
		return 1;
	}
}
