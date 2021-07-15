#include <stdio.h>

int main(){
	float a;
	printf("Ingrese un numero: ");
	scanf("%f", &a);
	
	printf ("El %%80 de %1.2f es: %f \n", a, a*0.8);
	printf ("El %%20 de %1.2f es: %f \n", a, a*0.2);
	printf ("El %%15 de %1.2f es: %f \n", a, a*0.15);
	
	return 0;
}
