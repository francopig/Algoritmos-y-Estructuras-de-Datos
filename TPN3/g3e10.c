#include <stdio.h>

//10. CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A LOS 
//QUE SE LES PAGA 50 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA HORA POR 
//ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA A 75 PESOS.
//EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE DEBE 
//PAGAR.
//ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES ASÍ 
//EL PROGRAMA SE VUELVE A REPETIR
//EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE CALCULE EL SALARIO.

int calcularSalario(int horas);

int main (){
	char continuar;
	int horasTrabajadas;
	
	printf("desea procesar datos? s/n \n");
	scanf("%c", &continuar);
	while (continuar == 's'){
		
		printf("Ingresar horas trabajadas \n");
		scanf("%i", &horasTrabajadas);
		printf("El salario es: $%i \n",calcularSalario(horasTrabajadas));
		
		printf("desea procesar mas datos? s/n \n");
		fflush(stdin); //100% necesaria
		scanf("%c", &continuar);
	}
	
	printf("fin del programa");
	return 0;
}

int calcularSalario (int horas){
	int salario;
	int extras; //cantidad de horas trabajadas por encima de 35
	const int VALORHORA = 50;
	const int VALOREXTRA = 75;
	
	if (horas < 35){
		salario = horas * VALORHORA;
	}else {
		extras = horas - 35;
		salario = (35 * VALORHORA)+(extras*VALOREXTRA);
	}
	
	return salario;
}
