#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h> /* Incluimos las librerías */  
  
int codigo, cantidad, valor, total, vuelto, pago; /* Declaramos las variables que usaremos en el proceso */  
int ok=1; /* Adicionalmente declaramos una variable ok, que nos servirá de bandera para un ciclo que usaremos */  
int opcion=1; /* Declaramos una variable opcion, que regulara si queremos hacer más de una venta */  
int menu;
int main(){

do  
{
    printf("1.- Módulo de ventas\n");  
    printf("2.- Administrar productos\n");  
    printf("3.- Administrar clientes\n");  
    printf("4.- Cerrar sistema\n");  
    printf("Ingrese opción: ");  
    scanf("%d",&menu);  
  
    switch(menu)  
    {  
        case 1: 
			while(opcion==1)  
    {  
        while(codigo!=4) /* Definimos un ciclo que se ejecute siempre que el usuario no presione la tecla para finalizar la venta */  
        {  
            printf("\t Lista de productos\n"); /* Listamos los productos */  
            printf("Codigo\t Nombre\t Precio\n");  
            printf("1\t Silla\t 100\n");  
            printf("2\t Puerta\t 350\n");  
            printf("3\t Sillon\t 200\n");  
            printf("\nPara cerrar la venta, presione 4"); /* Añadimos la opción para cerrar la venta */  
  
            printf("\nIngrese el codigo del producto que desea llevar: "); /* Pedimos el código del producto */  
            scanf("%d",&codigo);    /* Leemos el código del producto */  
            if(codigo==4) /* Si el código es igual a 4, significa que la venta está finalizada, así que cerramos el proceso de venta */  
            break;  
            printf("\nIngrese la cantidad que desea llevar: "); /* Pedimos la cantidad */  
            scanf("%d",&cantidad); /* Leemos la cantidad */  
  
            if(codigo==1) /* Igualamos el código para asignar el precio */  
                valor=100;  
            if(codigo==2)  
                valor=350;  
            if(codigo==3)  
                valor=200;  
  
            total=total+(valor*cantidad); /* A total le asignamos, el total acumulado hasta ahora, más el nuevo valor y nueva cantidad, multiplicados entre sí */  
  
        }  
        printf("\nEl total es de: %d",total); /* Saliendo de la venta, indicamos el total */  
        while(ok==1) /* Declaramos un ciclo con la variable ok, para el proceso de pago y vuelto, así se ejecutará hasta que se pague la cantidad correcta */  
        {  
            printf("\nIngrese el pago: "); /* Solicitamos el pago */  
            scanf("%d",&pago); /* Leemos el pago */  
            if(pago<total) /* Si el pago es inferior al total, mostramos un mensaje de error */  
            printf("\nEl pago no es suficiente");  
            else /* De lo contrario, cambiamos el valor de ok para romper el ciclo y mostramos los mensajes de vuelto */  
            {  
                ok=0;  
                vuelto=pago-total;  
                printf("\nEl vuelto es de: %d",vuelto);  
            }  
        }  
  
        printf("\n¿Desea hacer otra venta? (1=Si , 0=No): "); /* Preguntamos si desea hacer otra venta */  
        scanf("%d,",&opcion); /* Leemos la respuesta */
		codigo=0;  
    }  
    printf("\nVenta finalizada"); /* Mensaje final */  
    getch(); /* Programa en pausa hasta pulsar una tecla */   
        break;  
        case 2: //Por ahora en blanco, pero iría el código para administrar los productos  
        break;  
        case 3: //Por ahora en blanco, pero iría el código para administrar los clientes  
        break;  
        case 4: //Nada  
        break;  
    }  
}while(menu!=4); 
}
