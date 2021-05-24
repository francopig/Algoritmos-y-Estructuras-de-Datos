#include <stdio.h>
//9-DADO LOS 3 LADOS DE UN TRIÁNGULO DETERMINAR QUÉ TIPO DE TRIANGULO ES.

int main (){
	int lado1,lado2,lado3;
	lado1 = 5; lado2= 4; lado3=3;
	
	if((lado1 == lado2)&&(lado2 == lado3)){ //tres lados iguales
		printf("es un triangulo equilatero"); 
	} else if ((lado1 == lado2)||(lado1 == lado3) || (lado2 == lado3)){ //dos lados iguales
		printf("es un triangulo isosceles");
	} else {
		printf("Es un triangulo escaleno"); //lados desiguales
	}
	
	return 0;
}
