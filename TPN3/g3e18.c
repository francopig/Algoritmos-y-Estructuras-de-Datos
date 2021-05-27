#include <stdio.h>

//18. CREAR UN PROGRAMA EN C QUE MUESTRE UN MENÚ CON LAS OPCIONES SUMAR, RESTAR,
//MULTIPLICAR Y DIVIDIR, EL PROGRAMA SOLICITARÁ UNA OPCIÓN Y REALIZARÁ LA TAREA 
//ELEGIDA, SE DEBE USAR UNA FUNCIÓN PARA MOSTRAR EL MENÚ, PEDIR LOS DATOS EN EL 
//MAIN Y DESPUÉS USAR FUNCIONES PARA REALIZAR LOS CÁLCULOS.

void menu();
float calculadora (int a, int n1, int n2);
int main(){
	int opcionElegida,numero1,numero2;
	float resultado;
	
	printf("ingresar 2 valores para operar: \n");
	scanf(" %i %i", &numero1, &numero2);
	menu();
	scanf("%i", &opcionElegida);
	resultado = calculadora(opcionElegida,numero1, numero2);
	printf("Resultado: %.2f", resultado);
		
	return 0; 
}

void menu() {
	printf("Cual operacion desea realizar? \n");
	printf("1=sumar 2=restar 3=multiplicar 4=dividir : \n");
}

float calculadora (int a, int n1, int n2){
	
	switch(a){ //a es la opcion elegida
		
		case 1: 
			return n1+n2;
			break;
	
		case 2:
			return n1-n2;
			break;
		
		case 3:
			return n1*n2;
			break;
				
		case 4:
			return n1/n2;
			break;
	}
}
