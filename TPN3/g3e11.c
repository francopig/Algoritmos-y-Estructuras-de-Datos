#include <stdio.h>

//11. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS 
//MÚLTIPLOS DE 5, COMPRENDIDOS ENTRE EL 1 Y EL 100, IMPRIMA LOS NÚMEROS Y SU 
//SUMATORIA.
//EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES 
//MÚLTIPLO DE 5 O NO.
int multiplo (int n);

int main(){
	int i,sumatoria;
	sumatoria = 0;
	
	for(i=1; i <= 100; i++){
		if (multiplo(i) == 1){ //pregunto si es multiplo de 5
			printf("%i \n", i);
			sumatoria += i;
		}
	}
	printf("sumatoria: %i ", sumatoria);
	
	return 0;
}

int multiplo (int n){
	
	if(n%5 == 0){
		return 1; //devuelve 1 si es multiplo de 5
	}else{
		return 0;
    }	
}
