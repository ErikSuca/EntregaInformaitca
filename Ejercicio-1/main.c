/*
* 	desarrollar un programa que permita calcular el valor de la funcion(x)
* 	para el valor de x ingresado y muestre su resultado por pantalla
* 	f(x) = 3x + 2
*
*/

//archivo de cabecera
#include <stdio.h>

// funcion principal
int main (void){
	// variable 
	int valorX;
	
	//solicitando al usuario un valor para X
	printf("\nf(x) = 3X + 2 \nIngresar un valor de X : ");
	scanf("%d" , &valorX );
	
	//imprimiendo resultado
	printf("\nf(x) = %d\n", 3 * valorX + 2);
	
	return 0;
	
	
	
}
