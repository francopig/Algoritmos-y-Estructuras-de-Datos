#include <stdio.h>

int main (){
	float a,b,c;
	
	printf(" Ingresar 3 numeros \n");
	scanf ("%f %f %f", &a , &b, &c);
	
	printf("El doble de %f es: %1.2f \n", a, a*2);
	printf("El doble de %f  es: %1.2f \n",b ,b*2);
	printf("El doble de %f  es: %1.2f \n",c ,c*2);
	
	printf("El triple de %f  es: %1.2f \n",a ,a*3);
	printf("El triple de %f es: %1.2f \n",b ,b*3);
	printf("El triple de %f es: %1.2 \n",c ,c*3);
	
	printf("la mitad de %f es: %1.2f \n" ,a ,a/2);
	printf("la mitad de %f es: %1.2f \n" ,b ,b/2);
	printf("la mitad de %f es: %1.2f \n" ,c ,c/2);
	
	return 0;
}
