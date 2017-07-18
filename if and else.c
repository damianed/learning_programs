#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int numero; //creamos una variable tipo int con el nombre "numero"

int main()
{
	printf("Ingrese un numero del 1 al 10");
	scanf("%d",&numero);
	
	if(numero==5) //se revisa si el numero es igual a % recordando el uso de doble simbolo =
		printf("El numero ingresado es 5");
		
	else //si no es igual a 5
		if(numero>5) //si el numero es mayor a 5
		printf("El numero ingresado es mayor a 5");
		
		else //si el numero es menor a 5
		printf("El numero ingresado es menor a 5");
	
	getch();
}
