#include <stdio.h>
//8. REALIZAR UNA FUNCIÓN QUE RECIBA UN NÚMERO, MUESTRE LOS 5 NÚMEROS ANTERIORES 
//Y LOS 5 NÚMEROS SIGUIENTES AL NÚMERO INGRESADO.
void funcion (int n);

int main(){
	
	int numero;
	printf("ingresar un numero: \n");
	scanf("%i", &numero);
	funcion(numero);
	
	return 0;
}

void funcion (int n){
	int i,j,contador1,contador2;
	
	contador1 = n;
	contador2 = n;
	printf("$$$ 5 por encima: $$$\n");
	for (i=0; i < 5; i++){ 
		contador1 +=1;
		printf("%i \n", contador1);	
	}

	printf("$$$ 5 por debajo: $$$\n");
	for (j=0; j < 5; j++){ 
		contador2 -= 1;
		printf("%i \n",contador2);	
	}

}
