#include <stdio.h>

//16-DESARROLLE UN DIAGRAMA DE FLUJO QUE PERMITA CALCULAR EL PROMEDIO DE LAS 
//NOTAS DE UN CURSO. EL ALGORITMO TERMINA CUANDO SE INGRESA LA NOTA 0.

int main (){
	int i,continuar,nota,contador,acumulador;
	float promedio;
	
	continuar = 1;
	acumulador = 0;
	contador = 0;
	
	printf("Ingresar nota: \n");
	scanf("%i", &nota);
	if (nota == 0)
		continuar = 0;
		
	while (continuar == 1){
		
		acumulador += nota;
		contador += 1;
		printf("Ingresar nota: \n");
		scanf("%i", &nota);
		if (nota == 0)
			continuar = 0;
	}
	
	promedio = acumulador / contador;
	printf("El promedio de las notas es: %.2f ",promedio);
	
	return 0;
}
