#include <stdio.h>

int main()
{
	char nombre[100];
	int edad;
	float promedio;
	char secundaria[100];
	char sexo;
	
	printf("Hola buenos dias\n\n");
	printf("Cual es tu nombre? ");
	gets(nombre);
	printf("Hola %s!", nombre);
	
	printf("\n\nQue edad tienes? ");
	scanf("%d", &edad);
	printf("%s tienes %d", nombre, edad);
	
	printf("\n\nQue promedio sacaste en info? ");
	scanf("%f", &promedio);
	printf("En serio tu promedio en informatica fue de %.2f ... wow!", promedio);
	getchar();
	
	printf("\nComo se llamaba tu secundaria? ");
	gets(secundaria);
	printf("%s tu secundaria se llamaba: %s", nombre, secundaria);
	
	printf("\nEscribe la letra de tu sexo: ");
	scanf("%c", &sexo);
	
	printf("Veamos...\n");
	//system("pause");// detiene el flujo del programa y solicita enter para continuar
	getch();// lo mismo pero mas barato
	
	printf("\nTe llamas %s, tienes %d anxos, \ntu promedio de info el cuatri pasado fue de %f,", nombre, edad, promedio);
	printf("\nestudiaste en la secundaria %s y tu sexo es %c", secundaria, sexo);

	
	return 0;
}
