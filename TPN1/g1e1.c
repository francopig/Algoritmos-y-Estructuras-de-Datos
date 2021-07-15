#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//algoritmo que pida nombre, ap, telefono y edad de una persona 
//y luego lo muestre por pantalla

int main (){
	
	char nombre[10];
	char apellido[10];
	char telefono[10]; //no es int porque no vamos a realizar cuentas
	int edad;
	
	printf("Ingresar nombre: ");
	scanf("%s",&nombre);
	printf("El nombre ingresado es: %s \n", nombre);
	
	printf("Ingresar apellido: ");
	scanf("%s",&apellido);
	printf("El apellido ingresado es: %s \n", apellido);
	
	printf("Ingresar telefono: ");
	scanf("%s",&telefono);
	printf("El telefono ingresado es: %s \n", telefono);
	
	printf("Ingresar edad: ");
	scanf("%i",&edad);
	printf("La edad ingresada es: %i \n", edad);
	
	return 0;
}
