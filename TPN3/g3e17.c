#include <stdio.h>

//17. CREAR UNA FUNCIÓN “ESPRIMO”, QUE RECIBA UN NÚMERO Y DEVUELVA EL VALOR 1 SI ES 
//UN NÚMERO PRIMO O 0 EN CASO CONTRARIO.

int ESPRIMO (int n);

int main(){
	int numero;
	
	printf("ingresar numero \n");
	scanf("%i", &numero);
	if (ESPRIMO(numero) == 1){
		printf("es primo");
	}else{
		printf("es compuesto");
	}
		
	return 0;
}

int ESPRIMO(int n){
	int i,contador;
	contador = 0;
	
	for(i=1; i<= n/2; i++){
		if(n%i == 0){
			contador++;
		}
	} 
	
	if (contador > 2){
		return 0; 
	}else{
		return 1; //es primo
	}
}
