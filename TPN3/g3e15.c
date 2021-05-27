#include <stdio.h>

//15. CREAR UNA FUNCIÓN QUE RECIBA UN NÚMERO Y MUESTRE EN PANTALLA EL PERÍMETRO Y 
//LA SUPERFICIE DE UN CUADRADO QUE TENGA COMO LADO EL NÚMERO QUE SE HA INDICADO 
//COMO PARÁMETRO
void funcion (int n);
int main(){
	int lado;
	
	printf("ingresar el valor de un lado del cuadrado: \n");
	scanf("%i", &lado);
	funcion(lado);
	
	return 0;
}

void funcion (int n){
	
	printf("el perimetro es: %i \n", n+n+n+n);
	printf("la superficie es: %i \n", n*n);
}
