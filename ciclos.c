#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int numero;

void main()
{
	numero=1; //asignamos el valor inical a la varible "numero"
	
	while(numero <=10) //iniciamos el ciclo while
	{
		printf("%d\n",numero);//mostramos el valor y utilizamos \n para el salto de linea
		numero++; //incrementamos el valor de la variable en 1
		}
	
	for(numero=1;numero <=10;numero++)//ahora inciamos un ciclo for especificando los parametros
	{
		printf("%d\n",numero);//mostramos el numero
		}

	numero=1; //reiniciamos el numero a 1
	
	do //terminamos con un do-while
	{
		printf("%d\n",numero);//mostramos el numero
		numero++;//incrementamos el valor de "numero"
		
		} while(numero <=10);//establecemos la condición
		
		getch();//dejamos el programa en espera
}
