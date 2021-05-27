#include <stdio.h>

//3-HALLAR EL ÁREA DE LA SIGUIENTE FIGURA Y MOSTRARLA POR PANTALLA. HACER EL 
//MISMO EJERCICIO CON LAS FUNCIONES AREA1, AREA2, ÁREA, MOSTRAR.

int calcularArea (int base, int altura);
void mostrar (int area);
int main (){
	int base1, altura1, base2, altura2,area1,area2,areaTotal;
	//dividimos al figura en dos rectangulos y calculamos el area de c/u para dps sumarlas
	printf("ingresar base y altura de la primer sub-area: \n");
	scanf("%i %i", &base1, &altura1);
	
	printf("ingresar base y altura de la segunda sub-area: \n");
	scanf("%i %i", &base2, &altura2);
	
	area1 = calcularArea(base1, altura1);
	area2 = calcularArea(base2, altura2);
	
	areaTotal = area1 + area2;
	mostrar(areaTotal);
	return 0;
}

int calcularArea (int base, int altura){
	int area;
	
	area = base * altura;

	return area;
}
void mostrar (int area){
	
	printf("el area es de: %i",area);
}

