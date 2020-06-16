/*****************************************************************
Programa: Actividad 7
Fecha 27 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripcion: Suma y multiplicación de dos números
Datos de entrada: dos numeros
Datos de salida: resultado de la adicion y la multiplicacion de dos numeros
******************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
	float numero1, numero2, rSuma, rMulti;
	char opcion[3];
	
	do{
		system("cls");
		printf("Este programa calcula la suma y la multiplicacion de dos numeros");
		printf("\n\nIntroduce primer numero: ");
		scanf("%f", &numero1);
	
		printf("\nIntroduce el segundo numero: ");
		scanf("%f", &numero2);
		
		//Primero hacemos el procedimiento de la suma
		rSuma = numero1 + numero2;
		//Hacemos el procedimiento de la multiplicacion 
		rMulti = numero1 * numero2;
		
		//Mostramos los resultados al usuario
		printf("\nLa suma de los numeros %.2f y %.2f es igual a: %.2f", numero1, numero2, rSuma);
		printf("\n\nLa multiplicacion de los numeros %.2f y %.2f es igual a: %.2f", numero1, numero2, rMulti);
		
		printf("\n\nDesea calcular mas numeros (si/no)? ");
		scanf("%s", opcion);
		
	} while(opcion[0] == 's' || opcion[0] == 'S');
	
	return 0;
}
