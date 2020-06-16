/*****************************************************************
Programa: Actividad 3
Fecha 18 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripcion: Programa que solicita datos al usuario y lueho los despliega en pantalla
Datos de entrada: cadenas de caracteres y numeros
Datos de salida: serie de respuestas con la funcion printf
******************************************************************/

#include <stdio.h>
int main()
{
	char nombre[100];//, secu[100], sexo; // se pone [] porque es una matriz de caracteres
	char secu[100];
	char sexo;
	int edad;
	float prom;
	
	printf("Bienvenido\nCual es tu nombre? ");// para escribir \ podemos poner alt+92
	//scanf("%s", nombre); //La diferencia entre scanf y gets es que gets solo recibe cadenas
	gets(nombre);
	printf("Hola %s!", nombre);
		
	printf("\nQue edad tienes? ");
	scanf("%d", &edad);
	printf("%s, tienes %d anxos", nombre, edad);

	printf("\nCuanto sacaste el cuatri pasado en Informatica? ");
	scanf("%f", &prom);
	printf("En serio tu promedio en informatica fue de %f .... wow!", prom);
	getchar();
	
	printf("\nComo se llamaba tu secundaria? ");
	gets(secu);
	printf("%s tu secundaria se llamaba: %s", nombre, secu);
	
	printf("\nEscribe la letra de tu sexo: ");
	scanf("%c", &sexo);
	
	printf("Veamos...\n");
	//system("pause");// detiene el flujo del programa y solicita enter para continuar
	getch();// lo mismo pero mas barato
	
	printf("\nTe llamas %s, tienes %d anxos, \ntu promedio de info el cuatri pasado fue de %f,", nombre, edad, prom);
	printf("\nestudiaste en la secundaria %s y tu sexo es %c", secu, sexo);
	
	return 0;
}
