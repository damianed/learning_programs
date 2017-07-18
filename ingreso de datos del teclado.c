#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//incluimos las librerias nesesarias

int numero;
// creamos una variable tipo int con el nombre "numero"
int main()
{
	
	printf("ingrese un numero de 1 al 10 ");
	//pedimos al usuario que ingrese un numero
	
	scanf("%d",&numero);
	//leemos el numero ingresado
	
	printf("ingreso el numero %d",numero);
	getch();
	//mostramos el numero ingresado
} //cerramos la llave de la funcion main
