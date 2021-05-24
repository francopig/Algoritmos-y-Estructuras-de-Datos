#include <stdio.h>

//5-ESCRIBIR UN ALGORITMO QUE SOLICITE UNA NOTA E IMPRIMA POR PANTALLA LA 
//CALIFICACIÓN EN FORMATO “APROBÓ” O “NO APROBÓ” SEGÚN SI LA NOTA ES MAYOR O 
//IGUAL QUE 7 O MENOR QUE 7

int main (){
	int nota;
	
	printf("Ingresar nota \n");
	scanf("%i", &nota);
	if (nota >= 7){
		printf("aprobo");
	}else{
		printf("desaprobo");
	}
	
	return 0;
}
