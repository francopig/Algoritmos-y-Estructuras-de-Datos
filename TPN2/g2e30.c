#include <stdio.h>
//30-UNA CEREALERA DESEA CLASIFICAR SUS CLIENTES DE ACUERDO A LAS TONELADAS 
//QUE LE COMPRAN.
//CLIENTE QUE COMPRA MENOS DE 100 TONELADAS: CHICO.
//CLIENTE QUE COMPRA ENTRE 100 Y 300 TONELADAS: MEDIANO.
//CLIENTE QUE COMPRA MÁS DE 300 TONELADAS: GRANDE.
//SE DESEA DISEÑAR UN ALGORITMO QUE PERMITA EL INGRESO DE LAS TONELADAS POR 
//CLIENTE. FINALIZA EL INGRESO DE DATOS CUANDO SE INGRESE UN CLIENTE IGUAL A 000.
//LUEGO MUESTRE LA SIGUIENTE INFORMACIÓN POR PANTALLA: CANTIDAD DE CLIENTES,
//PROMEDIO DE TONELADAS VENDIDAS POR CATEGORÍA Y EL TOTAL DE TODAS LAS 
//TONELADAS VENDIDAS

int main(){
	int toneladas;
	int contador,acumulador,contadorChico,acumuladorChico;
	int contadorMediano,acumuladorMediano,contadorGrande,acumuladorGrande;
	float promedioChico, promedioMediano, promedioGrande;
	
	contador=0;acumulador=0;contadorChico=0;acumuladorChico=0;
	contadorMediano=0;acumuladorMediano=0;contadorGrande=0;acumuladorGrande=0;
		
	printf("Ingrese cantidad de toneladas a llevar o 000 para finalizar \n");
	scanf("%i", &toneladas);
	while (toneladas != 000){
		acumulador += toneladas;
		contador += 1;
		if (toneladas < 100){
			contadorChico += 1;
			acumuladorChico += toneladas;
			printf("categoria chico \n");
		}else if(toneladas <= 300){
			contadorMediano += 1;
			acumuladorMediano += toneladas;
			printf("categoria med \n");
		}else {
			contadorGrande += 1;
			acumuladorGrande += toneladas;
			printf("categoria gr \n");
		}
			
		printf("Ingrese cantidad de tneladas a llevar o 000 para finalizar \n");
		scanf("%i", &toneladas);	
	}
	
	printf("cantidad de clientes: %i \n", contador);
	printf("total de toneladas vendidas: %i \n",acumulador);
	
	promedioChico = acumuladorChico/contadorChico;
	promedioMediano = acumuladorMediano/contadorMediano;
	promedioGrande = acumuladorGrande/contadorGrande;
    printf("promedio de toneladas vendidas categoria Chica: %.2f \n", promedioChico);
    printf("promedio de toneladas vendidas categoria Mediano: %.2f \n", promedioMediano);
    printf("promedio de toneladas vendidas categoria Grande: %.2f \n", promedioGrande);
	
	
	return 0;
}
