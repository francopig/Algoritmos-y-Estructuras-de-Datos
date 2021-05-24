#include <stdio.h>
//25-UNA EMPRESA TIENE 65 TRABAJADORES, A CADA UNO DE ELLOS LE PAGA UN SUELDO 
//SEGÚN LAS HORAS TRABAJADAS. ADEMÁS A CADA TRABAJADOR CUYO SUELDO SUPERO 
//LOS 18000 PESOS LE DESCUENTA 10% POR CONCEPTO DE IMPUESTOS. SE DESEA SABER 
//CUÁNTOS TRABAJADORES GANAN MÁS DE 20000 PESOS, CUANTOS GANAN MENOS DE
//12000 PESOS.



int main(){
	int sueldo,horas,i,contador1,contador2;
	
	
	
	for (i=0; i < 3; i++){
		printf("Ingrese sueldo: \n");
		scanf("%i", &sueldo); //ya que no nos dan el valor de las horas para calcularlo
		printf("Ingrese horas : \n");
		scanf("%i", &horas);	
		if(sueldo>18000)
			sueldo= sueldo * 0.9;
		
		printf("sueldo= $%i \n",sueldo);
		if (sueldo>20000){
			contador1+=1;
		}	
		
		if (sueldo<12000)
			contador2+=1;
	}
	
	
	printf("Trabajadores que cobran mas de 20k: %i \n", contador1);
	printf("Trabajadores que cobran menos de 12k: %i \n", contador2);

	return 0;
}
