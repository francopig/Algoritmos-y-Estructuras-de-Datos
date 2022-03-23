#include <stdio.h> 

/*Mostrar suma de numeros del 1 - 100 con for / while / do while */
int main (){
	
	int i ;
	long int suma = 0;
	for(i = 1; i <= 100 ; i++){
		suma += i;
	}
	printf("Suma con for: %i \n", suma );
	
	///////////////
	int suma2 = 0;
	i = 1;
	while(i <= 100){
		
		suma2+= i;
		i++;
	}
	
	printf("Suma con while: %i \n", suma2);
	///////////////
	
	
	i = 1;
	int suma3 = 0;
	do{
		suma3+=i;
		i++;
	}while(i <= 100);
	
	printf("Suma con do While: %i \n", suma3);
	
	
	printf("Fin programa");
	return 0;
}

