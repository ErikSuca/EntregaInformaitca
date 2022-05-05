/*
* 	Desarrollar un programa que permita pedir por pantalla un cantidad de metros cuatrados	
* 	y luego el costo del metro cuadrado.
*	La cantidad de metros cuadrados debe estar entre $100 y $5.000
*	imprima el total aplicando un 5% de descuento sobre el neto (cantidad * costo)
*/

//archivo de cabecera
#include <stdio.h>

// funcion principal
int main (void){
	// variable 
	int cantidad, precio;
	
	//informacion sobre el programa para el usuario
	printf("\nEl programa informa el precio total de una compra aplicando un descuento del 5 porciento sobre el neto.\n Informar la cantidad y el precio del producto.");
	
	//pedir dato de cantidad
	printf("\nCantidad de m²: ");
	scanf("%d" , &cantidad );		
	
	//validacion de cantidad
	while(cantidad > 100 || cantidad < 1 ){
		printf("\nLa cantidad ingresada debe ser mayor a 1 (uno) y menor a 100 (cien)");
		printf("\nCantidad de m²: ");
		scanf("%d", &cantidad );
	}
	
	//pedir dato de precio
	printf("\nPrecio por m²: ");
	scanf("%d" , &precio );		
	
	//validacion de precio
	while(precio > 5000 || precio < 100 ){
		printf("\nEl precio ingresado debe ser mayor a 100 (cien) y menor a 5000 (cinco mil)");
		printf("\nPrecio por m²: ");
		scanf("%d", &precio );
	}
		
	//imprime resultado
	printf("\nEl costo total es %.2f \n", precio * cantidad * 0.95);

	
	
	
	return 0;
	
	
	
}
