#include <stdio.h>

//24- UN NEGOCIO DE PERFUMERÍA EFECTÚA DESCUENTOS EN SUS VENTAS SEGÚN EL IMPORTE DE 
//ESTAS, CON LA SIGUIENTE ESCALA:
//MENOR A 50 PESOS EL 3.5%
//ENTRE 50 Y 150 PESOS EL 10%
//ENTRE 151 Y 300 PESOS EL 20%
//MAYOR A 300 PESOS EL 25%
//CONFECCIONAR UN PROGRAMA QUE SOLICITE UN PRECIO ORIGINAL E INFORME: EL DESCUENTO 
//A EFECTUAR Y PRECIO NETO A COBRAR CON MENSAJES ACLARATORIOS. SE DEBE CONTEMPLAR 
//QUE SE PUEDE INGRESAR VARIOS IMPORTES Y PARA FINALIZAR SE INGRESA UN VALOR NEGATIVO

int main(){
	float precio, precioNeto, descuento;
	
	printf("Ingrese precio de la venta: \n");
	scanf("%f", &precio);
	while(precio > 0){
		
		//determino el descuento
		if(precio < 50){
			descuento = 3.5;
		}else if(precio <= 150){
			descuento = 10;
		}else if(precio <= 300){
			descuento = 20;
		}else {
			descuento = 25;			
		}
		//calculo
		precioNeto = precio - ((precio/100)*descuento);
		
		//informe
		printf("Descuento a efectuar: %% %.1f \n", descuento);
		printf("El precio neto es de: %.2f \n", precioNeto);
		printf("################################## \n");
		
		//ingreso de datos
		printf("Ingrese precio de la venta: \n");
		fflush(stdin);
		scanf("%f", &precio);
	}
	
	printf("fin del programa");
	return 0;
}
