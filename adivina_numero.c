/*****************************************************************
Programa: Actividad 4
Fecha 23 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripcion: Programa con pasos para adivinar un número pensado por el usuario.
Datos de entrada: Un numero
Datos de salida: serie de respuestas con la funcion printf
******************************************************************/
#include <stdio.h>

int main()
{
	float result;
	
	printf("Vamos a jugar un juego!\nVoy a intentar adivinar el numero que estas pensando");
	printf("\nPresiona Enter si estas listo...");
	getch(); 	//Absorbe un caracter del teclado sin mostrarlo en pantalla
	system("cls"); //directiva del sistema que limpia lo escrito en la terminal
	printf("Paso 1: Piensa en un numero y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 2: Multiplica ese mismo numero por 5 y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 3: A lo que te salio, sumale 12 y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 4: Multiplica por 10 lo que te quedo y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 5: Suma 5 a lo que te quedo y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 6: Multiplica lo que te quedo por 2 y oprime Enter cuando estes listo...");
	getch();
	printf("\nPaso 7: Que numero te quedo al final? "); //Paso 7
	scanf("%f", &result);
	
	/* Al número que resultó de las operaciones anteriores (el leído en el paso 7) hay que:
	restarle 250 y a lo que resulta hay que dividirlo entre 100. */
	//Operaciones sin operador aritmetico simplificado
	//result = result - 250;
	//result = result / 100;
	
	result -= 250;
	result /= 100;

	printf("\n\nDejame pensar, presiona Enter para continuar...");
	getch();
	system("cls"); 
	printf("\nEl numero que estabas pensando es: %f \n", result);
	
	return 0;
}


