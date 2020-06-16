/*****************************************************************
Programa: Practica 2 Ejercicio 2 
Fecha 8 de septiembre de 2019
Autor(es): Alfonso Mosco H.
DescripciÃ³n: PPrograma que demuestra el uso de variables
Datos de entrada: ninguno
Datos de salida: valor almacenado en las variables dolar y peso 
******************************************************************/
#include <stdio.h>

int main()

{
	const float un_dolar = 19.54; // un dolar vale 19.50 pesos
	float pesos, dolares;
		
	/*Usamos la funcion printf y scanf para solicitar datos al usuario y almacenarlos en una variable*/
	printf("Introduzca la cantidad en pesos: ");
	scanf("%f", &pesos);

	/*Operación simple */
	dolares = pesos / un_dolar;
	
	printf("%lf pesos mexicanos son %lf dolares estadounidenses. \n", pesos, dolares);

	return 0;
}
