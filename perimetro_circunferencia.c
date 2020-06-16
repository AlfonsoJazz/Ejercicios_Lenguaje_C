#include <stdio.h>

int main()
{
	const float Pi_ = 3.14159265; //declaracion de constante pi
	float radio;
	float perimetro;
	
	printf("Este programa calcula el perimetro de una circunferencia\n\n");
	printf("Introduce el radio: ");
	scanf("%f", &radio);
	
	perimetro = 2 * Pi_ * radio;
	
	printf("\nEl perimetro de la circunferencia es: %.3f", perimetro);
	getch();	
		
	return 0;
}

