#include <stdlib.h>   
#include <stdio.h>   
#include <conio.h>  
  
int opcion;  
  
int main() 
	{
	for (opcion=1;opcion!=3;)
	{
    /* A continuación escribimos nuestro menú, tabulando y dando saltos de línea */  
    printf("\tMenu");  
    printf("\n1.- Mostrar hola mundo");  
    printf("\n2.- Dar los buenos dias");  
    printf("\n3.- Salir");  
    printf("\nIngrese su opcion: ");  
    scanf("%d",&opcion); /* Leemos la opción que ingrese el usuario */  

	switch(opcion) // Activamos el switch con la variable opción.  
    {  
        case 1:      printf("\nHola mundo\n\n"); /* En el caso que ingrese 1 */  
                     break;  
        case 2:      printf("\nBuenos dias\n\n"); /* En el caso que ingrese 2 */  
                     break;  
        case 3:      break; /* Nada en el caso que ingrese 3 */  
  
        default:     printf("\nOpcion no valida"); /* Caso por defecto */  
                     break; } 
			}
    getch(); /* Ponemos el programa en pausa hasta que se presione una tecla */  
}
