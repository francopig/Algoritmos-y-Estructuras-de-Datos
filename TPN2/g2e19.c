#include <stdio.h>
//19- CONSTRUIR UN PROGRAMA QUE PUEDA INGRESAR VARIOS NUMEROS ENTEROS,
//DISTINTOS DE CERO, DE UNO POR VEZ. FINALIZA EL INGRESO DE LOS DATOS AL LLER UN
//VALOR NULO. INFORMAR: A) LA CANTIDAD DE VALORES INGRESADOS COMPRENDIDOS
//ENTRE PI Y 3PI. B) EL MENOR VALOR INGRESADO. 
int main(){
	int numeroIngresado, menor, contador;
	const int PI = 3.1415926535;
	
	printf("Ingrese un numero: \n");
	scanf("%i", &numeroIngresado);
	menor= numeroIngresado;
	while (numeroIngresado != 0){
		
		if((numeroIngresado >= PI)&& (numeroIngresado <= PI*3))
			contador += 1;
		
		//busqueda del menor
		if(numeroIngresado <= menor)
			menor=numeroIngresado;
		
		printf("Ingrese un numero: \n");
		scanf("%i", &numeroIngresado);
	}
	printf("cant de numeros entre pi y 3pi: %i \n", contador);
	printf("El menor numero: %i", menor);
	
	return 0;
}
