#include <stdio.h>

int main(){
	int puntaje = 1;
	
	if ((puntaje >= 1)&&(puntaje <= 5)){
		puntaje= puntaje * 6;
	}else if ((puntaje >= 6)&&(puntaje <= 8)){
		puntaje = puntaje *9;
	} else if ((puntaje >= 9)&&(puntaje <= 10)){
		puntaje = puntaje * 10;
	}else{
		printf("Fuera de rango");
	}
	
	
	printf("puntaje: %i", puntaje);
	return 0;
}
