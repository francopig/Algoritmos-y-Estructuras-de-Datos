#include <stdio.h>
#include<conio.h>
#include <windows.h>
#include <string.h>
	
int menu();
void cargarPresupuesto(float, float*, int);
void restarGasto (int, float, float*);
int main (){
	float vectorMeses[11];// 0 = enero ... 11 = dic
	int mesIngresado;
	float montoIngresado;
	int opcion; //la del menu
	int i;
    const int LONGITUD = 12;
	
	opcion = menu();
	while(opcion != 4){		
		
	   switch(opcion){
	   		case 1:
		   		system("cls");
				for(i=0; i<LONGITUD; i++){
					printf("Ingresar presupuesto del mes %i : $",i+1);//+1 para evitar el mes 0
					scanf("%f", &montoIngresado);
					cargarPresupuesto(montoIngresado, vectorMeses, i);
				}	
		   		printf("Presupuestos cargados! \n");
				system("pause");system("cls");
		
	   		break;
	   		
	   		case 2:
	   			printf("Ingresar Mes: ");
	   			scanf("%i", &mesIngresado);
				printf("Ingresar gasto: $ ");
				scanf("%f", &montoIngresado);
				restarGasto(mesIngresado,montoIngresado, vectorMeses);
	   			system("cls");
	   			
			break;	
	   		
	   		case 3:
	   			system("cls");
				printf("Monto sin utilizar: \n");
				for(i=0; i<LONGITUD; i++){
					printf("Mes %i = $%.2f \n",i+1,vectorMeses[i]);
				}
				system("pause");
	   			break;
	   		
	   		case 4:
			    break;
				         
			default: 
				printf("La opcion ingresada es erronea, reintentar \n");
				system("pause");system("cls");			    		    
	   }	
	
	  opcion = menu();
	  system("cls");
	}
	
	Beep(15000,6000);
	return 0;
}

int menu(){
	int opcion;
	system("cls");
	printf(" ------------ Menu  -------------\n");
	printf("1- Ingresar presupuesto de cada mes \n");
	printf("2- Ingresar gastos efecutados \n");
	printf("3- Mostrar presupuesto sin utilizar \n");
	printf("4- Salir \n");system("color 8"); 
	printf("\n\t\t\t Ingresar opcion:");scanf("%i",&opcion);
	return opcion;
}

void cargarPresupuesto (float monto, float *vectorMeses, int i){
	(*(vectorMeses+i))=monto;
}

void restarGasto (int mes, float gasto, float *vectorMeses){
		if(  *(vectorMeses + mes-1) < gasto ){
			printf("Gasto rechazado! \n");
			system("pause");
		}else{
			printf("Gasto aprobado! \n");
			*(vectorMeses + mes-1) -= gasto;
			system("pause");
		}
}
