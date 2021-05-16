#include <stdio.h>


//15-DADA UNA COMPRA DE 30 PC PARA UNA EMPRESA Y SABIENDO QUE CADA UNA 
//CUESTA 11500 PESOS.
//SÉ QUE EL PROVEEDOR ME HACE UN 20% DE DESCUENTO.
//SÉ QUE EL ENVÍO ME COBRA UN 5% DEL TOTAL.
//SÉ QUE EL SEGURO DE TRASLADO ES 12% DEL TOTAL EL CUAL SE DEVUELVEN SI LOS 
//EQUIPOS LLEGAN BIEN.
//OBTENER EL PRECIO SIN DESCUENTOS. EL PRECIO CON TODOS LOS DESCUENTOS SI 
//TODAS LAS PC LLEGAN BIEN. EL PRECIO CON TODOS LOS DESCUENTOS SI LAS PC
//LLEGAN MAL. SOLAMENTE EL PRECIO DEL DESCUENTO, SOLAMENTE EL PRECIO DEL 
//ENVÍO

int main (){
	
	const PC = 11500;
	const CANTIDAD = 30;
	int precio1,precio2,precio3, precio4,precio5;
	
	//pc + envio + seguro
	precio1 = (PC * CANTIDAD) + ((PC*CANTIDAD)*0.05) + ((PC*CANTIDAD)*0.12);
	printf("1- Precio sin descuentos $%i \n",precio1);
	
	//pc +envio + seguro        multiplicar x 0.8 es equivalente a restar el 20%
	precio2 = ((PC * CANTIDAD)*0.8) + ((PC*CANTIDAD)*0.05) + ((PC*CANTIDAD)*0.12);
	printf("2- Precio con todos los descuentos si todas las pc llegan bien: $%i \n",precio2);
	
   //pc + envio sin seguro
	precio3 = ((PC * CANTIDAD)*0.8) + ((PC*CANTIDAD)*0.05);
	printf("3- Precio con todos los descuentos si las pc llegan mal: $%i \n",precio3);
	
	//precio del descuento
	precio4 = (((PC*CANTIDAD)/100)*20); //20%
	printf("4- Precio del descuento: $%i \n",precio4);
	
	// precio del envio
	precio5 = (((PC*CANTIDAD)/100)*5); //5%
	printf("5- Precio del envio: $%i \n",precio5);
	
	return 0;
}
