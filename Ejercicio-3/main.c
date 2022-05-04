/*
* 		Desarrollar un programa que permita calcular el area de un triangulo
* 		Recuerde que la formula a utilizar es  A = base * altura / 2 
*		ademas valide que la base y la altura sean mayores a cero
*		al terminar imprima el resultado obtenido
*/

//archivo de cabecera
#include <stdio.h>

// funcion principal
int main (void){
	// variable 
	int base, altura;
	
	//informacion sobre el programa para el usuario
	printf("\nEl programa resulve el siguiente problema: \nA = base * altura / 2\nSiendo A el area de un triangulo");
	
	//solicitando al usuario un valor para base
	printf("\nBase: ");
	scanf("%d" , &base );
	
	//validacion para la base
	while(base <= 0 ){
		printf("\nEl valor ingresado debe ser mayor a CERO (0)");
		printf("\nBase: ");
		scanf("%d", &base );
	}
	
	
	// solicitando al usuario un valor para la altura
	printf("\nAltura: ");
	scanf("%d" , &altura );
	
	//validacion pra la altura
	while(base <= 0 ){
		printf("\nEl valor ingresado debe ser mayor a CERO (0)");
		printf("\nAltura: ");		
		scanf("%d", &altura );
	}
	
	printf("\nEl Area del triangulo es %.2f \n", base * altura / 2.00 );
	
	
	return 0;
	
	
	
}
