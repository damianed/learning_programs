#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int vector[5]; //declaramos el vector
int main()
{
	for(int i=0;i<5; i++) { //definimos el ciclo del rellenar
		printf("\ningrese el valor de la pocision %d del vector ",i);
		scanf("%d",&vector[i]);
	}
	printf("\nlos valores ingresados fueron ");
	for(int i=0;i<5;i++){
		printf("%d\t",vector[i]);
	}
	getch();
}

