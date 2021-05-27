#include <stdio.h>

//16. CREAR UNA FUNCIÓN “ESCRIBIRTABLAMULTIPLICAR”, QUE RECIBA COMO PARÁMETRO UN 
//NÚMERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE NÚMERO (POR EJEMPLO,
//PARA EL 3 DEBERÁ LLEGAR DESDE 3X0=0 HASTA 3X10=30)

void ESCRIBIRTABLAMULTIPLICAR (int n);
int main(){
	int numero;
	
	printf("Ingresar un numero para ver su tabla: \n");
	scanf("%i", &numero);
	ESCRIBIRTABLAMULTIPLICAR(numero);
	
	return 0; 
}

void ESCRIBIRTABLAMULTIPLICAR (int n){
	int i;
	
	for(i=1; i <= 10; i++){	
		printf("%i por %i es igual a: %i \n",n,i,(n*i));
	}
	
	
}
