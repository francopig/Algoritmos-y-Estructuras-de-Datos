#include <stdio.h>
#include <math.h>
// 1 milla = 1609 | 1 pulgada = 0.0254 metros 
// 1 yarda = 3pies | 1 pie = 12 pulgadas

//DADA UNA CANTIDAD EXPRESADA EN PIES, Y OTRA EN METROS. DETERMINAR LA 
//SUMA PERO CONVERTIDA A PULGADAS, A YARDAS, A METROS Y A MILLAS POR SEPARADO.
//CONSIDERE LAS SIGUIENTES EQUIVALENCIAS
int main (){
	
	float a,b,suma;
	float sumaEnPulgadas,sumaEnMillas,sumaEnYardas;
	//lee datos
	printf("Ingresar cantidad en pies: \n");
	scanf("%f", &a);
	printf("Ingresar cantidad en metros: \n");
	scanf("%f", &b);
	
	//convierto uno de los dos a la misma unidad del otro
	a = a /3.28; //pase de pies a metros
	suma = a+b; //valor en metros
	sumaEnPulgadas = suma /0.0254;
	sumaEnYardas = suma * 1.09361;
	sumaEnMillas = suma / 1609;
	
	printf("La suma en metros es: %f \n" , suma);
	printf("La suma en pulgadas es: %f \n" ,sumaEnPulgadas);
	printf("La suma en Yardas es: %f \n" , sumaEnYardas);
	printf("La suma en Millas es: %f \n" , sumaEnMillas);
	
	return 0;
}
