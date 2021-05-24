#include <stdio.h>

//6-DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y DETERMINE 
//SI DICHO NÚMERO ES PAR O IMPAR.

int main(){	
	int numero;
	printf("ingresar numero: ");
	scanf("%i", &numero);
	
	if(numero%2 == 0){
		printf("es par");
	}else
	{
		printf("Es impar");
	}
	
	return 0; 
}
