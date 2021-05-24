#include <stdio.h>

//17-DESARROLLE UN ALGORITMO QUE LE PERMITA DETERMINAR DE UNA LISTA DE 
//NÚMEROS:
//a. CUANTOS ESTÁN ENTRE EL 50 Y EL 75, AMBOS INCLUSIVE.
//b. CUANTOS SON MAYORES DE 80.
//c. CUANTOS SON MENORES DE 30

int main (){
	int n,contador1,contador2,contador3;
	
	contador1 = 0; contador2 = 0; contador3 = 0;
	printf("ingresar n (00 para finalizar): \n");
	scanf("%i", &n);
	while ( n != 00){
				
		if (n<30){
			contador3 += 1;
		}else if ((n>=50)&&(n<=75)){
			contador1 += 1;
		} else if (n>=80){
			contador2 +=1;
		}
		
		printf("ingresar n (00 para finalizar): \n");
		scanf("%i", &n);
	}
	printf("Numeros entre 50 y 75: %i \n",contador1);
	printf("Numeros mayores que 80: %i \n",contador2);
	printf("Numeros menos que 30: %i \n",contador3);

	return 0;
}
