#include <stdio.h>

int main (){
	float a,b,c,promedio;
	printf("Ingrese 3 numeros para obtener el promedio: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	promedio = (a+b+c)/3;
	printf("El promedio de los 3 numero es de: %1.2f ", promedio);
	
	return 0;
}
