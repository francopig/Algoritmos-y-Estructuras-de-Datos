#include <stdio.h>

//4-DADOS LA CANTIDAD DE VARONES Y EL DE MUJERES DE UN CURSO, CALCULAR EL TOTAL 
//DE ALUMNOS. SI EL TOTAL SUPERA LOS 35 ALUMNOS INFORMAR CURSO NUMEROSO.
//EN CASO CONTRARIO, CALCULAR E INFORMAR LO QUE SE DEBERÁ PAGAR PARA REALIZAR 
//UNA SALIDA CON TODOS, SI CADA ALUMNO PAGA $55.-

int main (){
	int hombres, mujeres, total;
	printf("ingresar cantidad de hombres: ");
	scanf("%i", &hombres);
	printf("\n ingresar cantidad de mujeres: ");
	scanf("%i", &mujeres);
	
	total = hombres + mujeres;
	if ( total > 35){
		printf("curso numeroso");
	}else{
		printf("Se debera pagar en total: $%i", 55*total);
	}
	
	return 0;
}
