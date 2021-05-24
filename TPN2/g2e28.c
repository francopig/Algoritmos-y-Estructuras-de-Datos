#include <stdio.h>
//
//28-CONFECICONAR UN PROGRAMA QUE PUEDA INGRESAR DIVERSOS VALOR NUMERICOS
//QUE CORRESPONDE A TEMPERATURAS MENORES A 99.99 GRADOS, MEDIDAS EN GRADOS
//CENTIGRADOS, QUE FINALIZAN CON UNO QUE TIENE EL VALOR 99.99. SE PIDE
//DETERMINAR E INFORMA: A) EL VALOR MAYOR DETECTADO. B) EL VALOR MENOR
//DETECTADO. C) UNA LISTA CON LOS VALORES INGRESADOS EXPRESADOS EN GRADOS
//CENTIGRADOS Y EN GRADOS FAHRENHEIT (F = C/0.555 + 32)

int main(){ 
	//NO SE PORQUE CUANDO COMPARO CONTRA 99.99 NO FUNCIONA 
	//ASI QUE LO HAGO COMPARANDO CONTRA 99 SIN DECIMALES
	//HASTA QUE ALGUIEN ME ILUMINE CON LA RESPUESTA
	float temperatura;
	float mayor,menor;
	
	printf("Ingresar temperatura: (99 para finalizar)\n");
	scanf("%f", &temperatura);
	mayor = temperatura;
	menor = temperatura;
	while(temperatura != 99){
		
		if (temperatura >= mayor)
			mayor = temperatura;
			
		if (temperatura <= menor)
			menor = temperatura;
			
		printf("Temperatura en celcius: %.2f \n", temperatura);
		printf("Temperatura en fahrenheit %.2f \n", (temperatura/0.555)+32);
		
		printf("Ingresar temperatura:(99 para finalizar) \n");
		scanf("%f", &temperatura);
	}
	
	printf("mayor temperatura registrada: %.2f \n",mayor);
	printf("mayor temperatura registrada: %.2f \n",menor);
	
	return 0;
}
