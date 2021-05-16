#include <stdio.h>
#include <math.h>

int main (){
	float celcius,fahrenheit,kelvin;
	
	printf("Ingrese temperatura en grados celcius: \n");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 1.8) + 32;
	kelvin = celcius + 273.15;
	
	printf("La temperatura en Fahrenheit es de: %1.2f \n", fahrenheit);
	printf("La temperatura en Kelvin es de: %1.2f \n", kelvin);
	
	//https://www.convertworld.com/es/temperatura/
	
	return 0;
}
