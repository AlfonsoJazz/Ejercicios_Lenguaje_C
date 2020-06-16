/*****************************************************************
Programa: Practica 2 Ejercicio 1 
Fecha 8 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripción: PPrograma que demuestra el uso de variables
Datos de entrada: ninguno
Datos de salida: valor almacenado en las variables dolar y euro
******************************************************************/
#include <stdio.h>

int main()
{
	/*Dos variables o más pueden ser declaradas a la vez en la misma linea si pertenecen al mismo tipo de dato*/
	double dolares;
	double pesos;
	
	/*Operación simple */
	pesos = 60;
	dolares = pesos * 19.54;

	printf("%lf pesos mexicanos son %lf dolaes estadounidenses. \n", pesos, dolares);
	getch();

	return 0;
}
