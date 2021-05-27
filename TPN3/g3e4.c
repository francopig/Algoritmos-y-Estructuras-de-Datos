#include <stdio.h>
//4. REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO 
//UTILIZANDO FUNCIONES

int paridad (int numero);
int main(){
	int n;
	
	printf("Ingrese un numero para ves si es par o no: \n");
	scanf("%i", &n);
	if (paridad(n) == 1){
		printf("es par");
	}else{
		printf("es impar");
	}
}

int paridad (int numero){ //devuelve 1= par | 0=impar

	if((numero%2) == 0){
		return 1;
	}else{s
		return 0;
	}
}
