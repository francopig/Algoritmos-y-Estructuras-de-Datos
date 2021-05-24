#include <stdio.h>
//13-DADA LAS EDADES Y ESTATURAS DE 6 ALUMNOS. SE PIDE DETERMINAR: LA EDAD 
//PROMEDIO, LA ESTATURA PROMEDIO, LA CANTIDAD DE ALUMNOS MAYORES A 10 AÑOS Y 
//LA CANTIDAD DE ALUMNOS QUE MIDEN MÁS DE 1.40 MT

int main (){
	int edad;
	float promedio;
	int i,mayores,acumulador,altos,altura;
	
	
	for (i=1; i<=6; i++){
		printf("ingresar edad:\n");
		fflush(stdin);
		scanf("%i", &edad);
		printf("ingresar altura en cms \n");
		fflush(stdin);
		scanf("%i", &altura);
		
		acumulador += edad;
		if (edad > 10)
			mayores +=1;
			
		if(altura > 140)
			altos +=1;
		
	}
	printf("cant mayores de 10: %i\n", mayores);
	printf("cant mayores de 140 cms: %i\n", altos);
	promedio = acumulador/6;
	printf("Promedio: %.2f \n", promedio);
	return 0;
}
