#include <stdio.h>
//20-UNA EMPRESA TIENE 4 VENDEDORES. CADA VENDEDOR CUANDO REALIZA UNA VENTA 
//EMITE UNA FACTURA. SE PROCESAN LOS DATOS HASTA QUE SE INGRESA UN NUMERO DE
//FACTURA IGUAL 0. LOS DATOS INGRESADOS DE LA FACTURA SON: Nº DE FACTURA, Nº DE 
//VENDEDOR, MONTO DE LA FACTURA. SE DESEA CALCULAR E INFORMAR:
//A. CUANTAS FACTURAS EMITIÓ CADA VENDEDOR.
//B. TOTAL FACTURADO POR CADA VENDEDOR Y EL TOTAL FINAL ACUMULADO 
//DE LOS VENDEDORES.


int main(){
	int factura,total,vendedor, monto;
	int contadorVendedor1, contadorVendedor2, contadorVendedor3, contadorVendedor4;
	
	total = 0;
	contadorVendedor1 = 0;
	contadorVendedor2 = 0;
	contadorVendedor3 = 0;
	contadorVendedor4 = 0;
	printf("Ingrese numero de factura o 0 para finalizar: ");
	scanf("%i", &factura);
	if ( factura != 0){
		printf("ingrese N de vendedor: ");
		scanf("%i", &vendedor);	
		printf("\n ingrese monto de la factura: ");
		scanf("%i", &monto);
	}
	
	while(factura != 0){

		switch(vendedor){
			case 1:
				contadorVendedor1 +=1;
				break;
			case 2:
				contadorVendedor2 +=1;
				break;
			case 3:
				contadorVendedor3 +=1;
				break;
			case 4:
				contadorVendedor4 +=1;
				break;
		}

		total += monto;
		
		printf("Ingrese numero de factura o 0 para finalizar: ");
		scanf("%i", &factura);	
		if (factura != 0){
			printf("ingrese N de vendedor: ");
			scanf("%i", &vendedor);
			printf("\n ingrese monto de la factura: ");
			scanf("%i", &monto);
		}
	}
	
	printf("total de ventas $%i \n",total);
	printf("Ventas del vendedor 1: %i \n", contadorVendedor1);
	printf("Ventas del vendedor 2: %i \n", contadorVendedor2);
	printf("Ventas del vendedor 3: %i \n", contadorVendedor3);
	printf("Ventas del vendedor 4: %i \n", contadorVendedor4);
	
	return 0;
}
