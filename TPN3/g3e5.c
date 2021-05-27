#include <stdio.h>
//5. REALIZAR FUNCIÓN QUE TOME DOS NÚMEROS REALES COMO PARÁMETROS Y DEVUELVA UN 
//NÚMERO REAL QUE SERÍA LA MEDIA DE LOS DOS NÚMEROS.

float media(float r1, float r2);

int main(){
	float real1, real2;
	
	printf("Ingrese dos reales para ver la media: \n");
	scanf("%f %f", &real1, &real2);
	
	printf("la media es de: %.2f", media(real1, real2));
	
	return 0;
}

float media(float r1, float r2){
	
	return (r1+r2)/2;
}
