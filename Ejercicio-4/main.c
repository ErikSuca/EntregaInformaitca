/*
* 		Desarrollar un programa que permita calcular el promedio de 3 notas.
* 		Luego obtener la situacion final que refleja el promedio ya sea aprobado o reprobado
*		Considere validar que las notas esten entre 1 y 7
*		Al terminar imprima la situacion junto con el promedio
*/

//archivo de cabecera
#include <stdio.h>

// funcion principal
int main (void){
	// variable 
	int nota, sumatoria = 0;
	
	//informacion sobre el programa para el usuario
	printf("\nEl programa resulve el promedio de 3 (tres) notas e indica si aprobo.\nSe aclara que para aprobar se require una nota igual o mayor a 5 (cinco).");
	
	for(int i = 0; i < 3; i++){
		//solicitando al usuario un valor para la nota
		printf("\nNota: ");
		scanf("%d" , &nota );		

		//validacion para la base
		while(nota > 7 || nota < 1 ){
			printf("\nLa nota ingresada debe ser mayor a 0 (cero) y menor a 8");
			printf("\nNota: ");
			scanf("%d", &nota );
		}

		//acomulando valor de la nota
		sumatoria += nota;
		
	}
	
	//imprime resultado
	printf("\nEl alumno ");

	//condicion de aprobacion 
	(sumatoria/3.00 >= 5)?printf("APROBO"):printf("DESAPROBO");
	
	//calculando promedio
	printf(" y su promedio fue de %.2f\n", sumatoria/3.00);
	
	
	
	return 0;
	
	
	
}
