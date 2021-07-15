#include <stdio.h>
#include <math.h>
int main (){
	const float PI = 3.1415;
	float radio,altura,area,volumen;
	
	printf("Ingresar radio en cm: \n");
	fflush(stdin);
	scanf("%f", &radio);
	printf("Ingresar altura en cm: \n");
	fflush(stdin);
	scanf("%f", &altura);

	//hay 2 formulas, aplicamos esta porque conocemos radio y altura
	area = 2 * PI * radio * (radio+altura); //usar lib math.h
	volumen = PI * pow(radio,2) * altura;
	
	printf ("Area: %1.3f \n", area);
	printf ("Volumen: %f1.3 cm3", volumen);
	return 0;
}
