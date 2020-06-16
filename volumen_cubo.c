/*****************************************************************
Programa: Actividad 6
Fecha 8 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripcion: Programa que calcula el volumen de un cubo
Datos de entrada: Arista de un cubo
Datos de salida: Volumen de un cubo
******************************************************************/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	//Primero definimos las variables
	float arista;
	float volumen;
	
	printf("Programa que calcula el volumen de un cubo\n");
	printf("Introduzca la arsita: ");
	scanf("%f", &arista);
	
	volumen = pow(arista, 3);
	
	printf("\nEl volumen del cubo es: %.4f", volumen);
	getch();
	
	return 0;
}
