#include <stdio.h>
//11-DADA LA CANTIDAD DE HORAS TRABAJAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL
//EMPLEADO, Y ADEMÁS SABEMOS QUE COBRA 650 PESOS POR CADA AÑO TRABAJADO Y 
//QUE EL VALOR DE LA HORA SEGÚN LA CATEGORÍA ES: CAT 1= 100, CAT 2= 200, CAT 3=
//250, CAT 4= 300.
//a. DETERMINAR SUELDO DEL EMPLEADO.
//b. INFORMAR SI EL SUELDO SUPERA LOS 20000 PESOS

int main (){
    
	int categoria, sueldo;
	int horasTrabajadas,antiguedad, valorHoras;
	const cat1=100, cat2=200, cat3=250, cat4=300, anio=650;
	
	printf("ingresar categoria del empleado: \n");
	fflush(stdin);
	scanf("%i", &categoria);

	printf("ingresar antiguedad: \n");
	fflush(stdin);
	scanf("%i", &antiguedad);
	
	printf("ingresar horas: \n");
	fflush(stdin);
	scanf("%i", &horasTrabajadas);	
	
	switch(categoria){
		case 1:
			valorHoras = horasTrabajadas * cat1;
			break;
			
		case 2:
			valorHoras = horasTrabajadas * cat2;
			break;
			
		case 3:
			valorHoras = horasTrabajadas * cat3;
			break;
			
		case 4:
			valorHoras = horasTrabajadas * cat4;
			break;
	}
	
	sueldo = valorHoras + (antiguedad * anio);
	if (sueldo > 20000)
		printf("sueldo mayor a 20k \n");
	printf("sueldo:$%i", sueldo);
	return 0;
}
