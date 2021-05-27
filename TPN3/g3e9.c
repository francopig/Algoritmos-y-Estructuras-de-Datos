#include <stdio.h>
//9. DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL 
//EMPLEADO.
//a. SABIENDO QUE COBRA 50 PESOS POR CADA AÑO TRABAJADO Y QUE EL VALOR 
//DE LA HORA SEGÚN LA CATEGORÍA: CAT 1= 10, CAT 2= 20, CAT 3= 25, CAT 4=
//30.
//b. DETERMINAR SUELDO DEL EMPLEADO.
//c. INFORMAR SI EL SUELDO SUPERA LOS 1000 PESOS.
//EFECTUAR EL EJERCICIO CON AL MENOS 2 FUNCIONES: UNA PARA CALCULAR EL COBRO POR 
//ANTIGÜEDAD Y OTRA PARA CALCULAR EL COBRO POR HORAS.
int valorAntiguedad (int n);
int valorHoras (int horas, int categoria);
int main (){
	
	int sueldo, horasTrabajadas,antiguedad,categoria;
	
	printf("Ingresar horas trabajadas: \n");
	scanf("%i", &horasTrabajadas);
	printf("Ingresar antiguedad: \n");
	scanf("%i", &antiguedad);
	printf("Ingresar la categoria: 1/2/3/4 \n");
	scanf("%i", &categoria);
	
	sueldo = valorAntiguedad(antiguedad) + valorHoras(horasTrabajadas, categoria);
	printf("El sueldo es de: %i \n", sueldo);
	if (sueldo > 1000)
		printf("el sueldo supera los 1000 \n");
			
	
	return 0;
}

int valorAntiguedad (int n){
	return n*50;
}

int valorHoras (int horas, int categoria){
	int valor;
	const int CAT1= 10;
	const int CAT2 = 20;
	const int CAT3 = 25;
	const int CAT4 = 30;
	
	switch(categoria){
		case 1:
			valor = horas * CAT1;
			break;
		
		case 2:
			valor = horas * CAT2;
			break;
		
		case 3:
			valor = horas * CAT3;
			break;
		
		case 4:
			valor = horas * CAT4;
			break;
	}
	
	return valor;
}
