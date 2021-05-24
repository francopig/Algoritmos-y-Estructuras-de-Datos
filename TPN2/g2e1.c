#include <stdio.h>

//1-DADA LA NOTA Y EL LEGAJO DE UN ALUMNO. INFORMAR EL LEGAJO Y SI LA NOTA ES 
//SUPERIOR A 6

int main(){
	int nota;
	int legajo;
	
	printf("Ingresar legajo: \n");
	scanf("%i", &legajo);
	printf("Ingresar nota: \n");
	scanf("%i", &nota);
	
	printf("El legajo es: %i \n", legajo);
	if (nota > 6) //se pueden obviar las llaves cuando hay una sola linea
		printf("La nota es superior a 6 \n");
		
	return;
}
