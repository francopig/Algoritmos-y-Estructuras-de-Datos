#include <stdio.h>
#include <math.h>

int main (){
	float cateto1, cateto2,hipotenusa;
	
	printf("Ingresar valor del cateto 1: \n");
	scanf("%f", &cateto1);
	printf("Ingresar valor del cateto 2: \n");
	scanf("%f", &cateto2);
	
	// h^2 = a^2 + b^2;
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	printf("El valor de la hipotenusa es de %1.2f :",hipotenusa);
	
	
	return 0;
}
