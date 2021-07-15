# include <stdio.h>


int main (){
	float pesos,dolares;
	dolares = 93.93;
	
	printf("Ingrese la cantidad de pesos a convertir: ");
	scanf("%f", &pesos);
	
	printf("La cantidad en dolares es de USD: %1.2f", pesos/dolares);
	
	return 0;
}
