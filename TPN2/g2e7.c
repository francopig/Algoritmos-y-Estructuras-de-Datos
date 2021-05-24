#include <stdio.h>
//7- DADO UN NÚMERO VERIFICAR SI ES POSITIVO, NEGATIVO O NULO.
int main(){
	int numero;
	printf("ingresar numero: \n");
	scanf("%i", &numero);
	
	if (numero == 0){
		printf("nulo");
	}else if (numero > 0){
		printf("positivo");
	}else {
		printf("negativo");
	}
	
	return 0;
}
