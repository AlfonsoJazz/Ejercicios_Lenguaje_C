/*****************************************************************
Programa: Actividad 8
Fecha 27 de septiembre de 2019
Autor(es): Alfonso Mosco H.
Descripcion: Programa que calcula el promedio de 3 calificaciones
y avisa si el alumno aprobo o reprobo con la funcion IF
Datos de entrada: 3 calificaciones (numeros flotantes)
Datos de salida: Promedio y aviso 
******************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
	float calificacion1, calificacion2, calificacion3, promedio;
	char opcion[3];
	do{
		system("cls");
		printf("Este programa calcula la calificacion de 3 materias");
		printf("\n\nIngrese la primera calificacion: ");
		scanf("%f", &calificacion1);
		printf("\nIngrese la segunda calificacion: ");
		scanf("%f", &calificacion2);
		printf("\nIngrese la tercera calificacion: ");
		scanf("%f", &calificacion3);
		
		//Sacamos el promedio de las tres calificaciones
		promedio = (calificacion1 + calificacion2 + calificacion3)/3;
		
		//mostramos los resultados pero falta validar la calificacion
		printf("\n\nEl promedio es: %.2f", promedio);
		
		//Aqui tenemos la sentencia IF
		if(promedio>=6){
			printf("\nEl alumno aprobo el cuatrimestre");
		}else{
			printf("\nEl alumno reprobo el cuatrimestre");
		}
		getch();
		
		printf("\n\nDesea calcular mas numeros (si/no)? ");
		scanf("%s", opcion);
		
	} while(opcion[0] =='s' || opcion[0] == 'S');
	
	return 0;
}


