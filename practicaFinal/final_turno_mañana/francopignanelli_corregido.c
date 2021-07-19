
//Respuestas teoria:
 // falso
 // Verdadero	
 // Verdadero
 // Verdadero
 
 #include <stdio.h>
 
int menu ();
void cargarDatos (int,char,float,int*,char*,float*,int);
// inscripcion,tipoPrueba,tiempo,vInscripcion,vPrueba,vTiempo,i
int informeA (char*, int); //vectorPrueba
float informeB(char*,float*, int); //vPrueba, vTiempo, longitud

 int main(){
 	int vInscripciones[4]; 
 	char vPruebas[4]; 
 	float vTiempo[4];
 	const int LONGITUD = 5;
 	
 	int opcionMenu;
 	int inscripcion;
 	char tipoPrueba;
 	float tiempo;
	int i = 0;
	int contadorParticipantes;	//para el Punto 2A
	float acumuladorTiempo; // para el punto 2B
	
 	opcionMenu = menu();
  	while(opcionMenu != 3){
  		
  		switch(opcionMenu){
  			case 1:
  				if(i < LONGITUD){
	  				system("cls");
	  				
	  				//Pido los datos
	  				printf("Ingresar numero de inscripcion del participante N%i: ",i+1);
	  				scanf("%i", &inscripcion);
	  				printf("Ingresar tipo de prueba (p/m): ");
	  				fflush(stdin);
	  				scanf("%c", &tipoPrueba);	
	  				printf("Tiempo en minutos que llevo terminar la prueba:");
	  				scanf("%f", &tiempo);
	  				
	  				//llamo al a funcion y paso los parámetros
	  				cargarDatos(inscripcion,tipoPrueba,tiempo,vInscripciones,vPruebas,vTiempo,i);  	
	  				
  					printf("Participante registrado! \n");
  					i++; //aumento el contador que utilizo para los participantes
  					system("pause");system("cls");
				}else {
					printf("No se pueden cargar mas de 50 participantes");
					system("pause");system("cls");
				}
				
  				break;
  			
  			case 2: 
  				system("cls");
  				
				contadorParticipantes = informeA(vPruebas, LONGITUD);
				printf("Cantidad de participantes inscriptos en pasteleria: %i \n", contadorParticipantes);	
				
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
 
 int informeA(char *vPruebas, int longitud){
 	int contador = 0;
	int i; 
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
