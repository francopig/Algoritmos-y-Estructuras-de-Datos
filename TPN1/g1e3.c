#include <stdio.h>
#include <math.h>

int main (){
	float a,b;
	float auxiliar;
	printf("Ingrese dos numeros: \n");
	scanf("%f %f", &a, &b);
	
	printf("la suma es: %f \n", a+b);
	printf("la resta es: %f \n", a-b);
	printf("la multiplicacion es: %f \n", a*b);
	printf("la division es: %1.3f \n", a/b); //muestra un 1 entero y 3 decimales
	
	printf("Intercambio el valor de las variables \n");
	auxiliar = a;
	a = b;
	b = auxiliar;
	
	printf("valor de a: %f \n", a);
	printf("valor de b: %f \n", b);
	
	return 0;
}
