#include <stdio.h>
//8-REALIZAR UN PROGRAMA QUE PIDA EL INGRESO DE 2 NÚMEROS Y LA OPERACIÓN A 
//REALIZAR ENTRE ELLOS Y MUESTRE EL RESULTADO DE LA OPERACIÓN.

int main(){
	float numero1,numero2,res;
	char operacion;
	printf("ingrese 2 numeros: \n");
	scanf("%f %f", &numero1, &numero2);
	
	printf("s= suma, r=restar, m=multiplicar, d=dividir \n");
	fflush(stdin); //NECESARIO LIMPIAR BUFFER O NO FUNCIONA EL PROGRAMA
	scanf("%c", &operacion);
	
	switch(operacion){
		case 's':
			res = numero1+numero2;
			break;
		
		case 'r':
			res = numero1-numero2;
			break;
		
		case 'm':
			res = numero1 * numero2;
			break;
		
		case 'd':
			res = numero1 /numero2;
			break;
	}
	
	printf("resultado: %.2f",res);
	
	return 0;
}
