
 //Respuestas teoria:
 // falso
 // Verdadero	
 // Verdadero
 // Verdadero
 
 #include <stdio.h>
 
int menu ();
void cargarDatos (int,char,float,int*,char*,float*,int);
// inscripcion,tipoPrueba,tiempo,vInscripcion,vPrueba,vTiempo,i
int informeA (char*); //vectorPrueba
float informeB(char*,float*, int); //vPrueba, vTiempo, longitud

 int main(){
 	int vInscripciones[49]; 
 	char vPruebas[49]; 
 	float vTiempo[49];
 	const int LONGITUD = 50;
 	int opcionMenu;
 	int inscripcion;
 	char tipoPrueba;
 	float tiempo;
	int i;
	int contadorParticipantes;	//para el Punto 2A
	float acumuladorTiempo; // para el punto 2B

 	opcionMenu = menu();
  	while(opcionMenu != 3){
  		
  		switch(opcionMenu){
  			case 1:
  				for(i=0; i<LONGITUD; i++){
	  				system("cls");
	  				printf("Ingresar numero de inscripcion del participante N%i: ",i+1);
	  				scanf("%i", &inscripcion);
	  				printf("Ingresar tipo de prueba (p/m): ");
	  				fflush(stdin);
	  				scanf("%c", &tipoPrueba);	
	  				printf("Tiempo en minutos que llevo terminar la prueba:");
	  				scanf("%f", &tiempo);
	  				cargarDatos(inscripcion,tipoPrueba,tiempo,vInscripciones,vPruebas,vTiempo,i);  						
  					printf("Participante registrado! \n");
  					system("pause");system("cls");
				  }
  				break;
  			
  			case 2: 
  				printf("opcion 2 ingresada \n"); 
				contadorParticipantes = informeA(vPruebas);
				printf("Cantidad de participantes inscriptos en pasteleria: %i \n", contadorParticipantes);
				printf("---------------------------- \n");
				acumuladorTiempo = informeB(vPruebas,vTiempo, LONGITUD);
				printf("Tiempo total en minutos de los participantes de Mediterranea: %.2f \n", acumuladorTiempo);
  				system("pause");system("cls");
  				break;
  			
  			case 3:
  				printf("opcion 3 \n");
  				system("pause");system("cls");
  				break;
  				
  			default: 
  				printf("La opcion ingresada es incorrecta \n");
  				system("pause");system("cls");
		  }
  		
  	    opcionMenu = menu();
	}
 	
 	return 0;
 }
 
 int menu(){
 	int opcion;
 	
 	system("cls");
 	printf("----------------- Menu --------------- \n");
 	printf("1- Ingresar datos del participante \n");
 	printf("2- Generar Informe	\n");
 	printf("3- Salir");
 	printf("\t \t \t Ingresar opcion: ");scanf("%i",&opcion);
 	
 	return opcion;
 }
 
 void cargarDatos (int inscripcion, char tipo, float tiempo,int *vInscripciones,char *vPruebas,float *vTiempo,int i){
	*(vInscripciones+i) = inscripcion;
	*(vPruebas + i) = tipo;
	*(vTiempo + i) = tiempo;
 }
 
 int informeA(char *vPruebas){
 	int contador = 0;
	int i; int longitud = 15;
	for(i=0; i<longitud; i++){
		fflush(stdin);
		if(*(vPruebas+i) == 'p'){
			contador++;
		}
	}
	return contador;
 }
 
 float informeB(char *vPruebas, float *vTiempo, int longitud){
 	float acumulador = 0;
 	int i; 
 	for(i=0; i<longitud; i++){
 		if(*(vPruebas+i) == 'm'){
 			acumulador += *(vTiempo + i);	
		}
	}
 	return acumulador;
 }
