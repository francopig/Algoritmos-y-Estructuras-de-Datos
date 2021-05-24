#include <stdio.h>
#include <string.h>

//18-INGRESAR CÓDIGO DE ARTICULO Y PRECIO, HASTA UN CÓDIGO DE ARTICULO IGUAL 0,
//DETERMINAR EL CÓDIGO DE ARTICULO DEL PRECIO MÁS CARO Y EL DE MENOR PRECIO.

int main(){
	int precio, mayor, menor;
	char articulo[10];
	char articuloCaro[10];
	char articuloMenor[10];
	
	printf("Ingresar codigo del articulo: \n");
	scanf("%s", &articulo);
	if(articulo[0] != '0'){ // para evitar que pida el precio cuando queremos salir
			printf("Ingresar precio del articulo: ");
			scanf("%i", &precio);
	}
		
	mayor = precio; //inicializamos con el primer valor
	menor = precio;
	strcpy(articuloCaro, articulo); //NECESITMAOS STRING.H
	strcpy(articuloMenor, articulo);
	while (articulo[0] != '0'){ //comparo solo con la primer posición porque sino no funciona
		
		if(precio > mayor){
			mayor = precio;
			strcpy(articuloCaro, articulo);
		}
			
		if(precio < menor){
			menor = precio;
			strcpy(articuloMenor, articulo);
		}
		
		printf("Ingresar codigo del articulo: \n");
		scanf("%s", &articulo);
		if(articulo[0] != '0'){ // para evitar que pida el precio cuando queremos salir
			printf("Ingresar precio del articulo: ");
			scanf("%i", &precio);
		}
	}
	
	printf("Codigo del articulo mas caro: %s \n", articuloCaro);
	printf("Codigo del articulo mas barato: %s \n", articuloMenor);
	
	return 0;
}
