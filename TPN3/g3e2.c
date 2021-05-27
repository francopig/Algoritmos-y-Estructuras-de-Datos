#include <stdio.h>
#include <stdlib.h>
//2-REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR 
//PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.

int ingreso(int a);
void intercambiarValores (int a, int b);

int main(){
	int numero1,numero2;
	
	numero1 = ingreso(numero1);
	numero2 = ingreso(numero2);
	printf("el valor 1 es:%i ||| el valor 2 es:%i \n",numero1, numero2);
	intercambiarValores (numero1, numero2);
	
	return 0;
}

int ingreso(int a){
	printf("Ingresar numero \n");
	scanf("%i", &a);
	return a;
} 

void intercambiarValores (int a, int b){
	int auxiliar;
	
	auxiliar = a;
	a = b;
	b = auxiliar;
	printf("Valor de a: %i \n",a);
	printf("Valor de b: %i \n",b);
}

//consigna un poco confusa. utilice como ref el ejercicio resuelto del campus
