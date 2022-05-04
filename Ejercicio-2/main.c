/*
* 	Diseñe un algoritmo para mostrar el mensaje APROBADO si la nota final
* 	de un estudiante es mayor o igual que 6 y el mensaje DESAPROBADO 
* 	en caso contrario
*
*/

//archivo de cabecera
#include <stdio.h>

// funcion principal
int main (void){
	// variable 
	int nota;
	
	//solicitando al usuario un valor para X
	printf("\nNota del estudiante: ");
	scanf("%d" , &nota );
	
	//condicion de aprobacion
	if(nota >= 6){
		// imprimiendo resultado
		printf("\nAPROBADO\n");
	} else {
		// imprimiendo resultado
		printf("\nDESAPROBADO\n");
	}
	
	
	return 0;
	
	
	
}
