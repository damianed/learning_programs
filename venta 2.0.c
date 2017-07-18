#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int codigo, cantidad, valor, total, vuelto, pago; //declaramos todas las variables tipo int que necesitaremos
int ok=1; //declaramos una variable ok que nos servira de en un ciclo que usaremos
int opcion=1; //declaramos una función que nos servira para regular si queremos hacer una venta o no

int main()
{
	while(opcion==1){
		while(codigo!=4){
			printf("\t lista de productos\n ");//Partimos por listar los productos, utilizamos \t para separar los textos, tal como si utilizaramos la tecla TAB
			printf("codigo\t nombre\t precio\n");
			printf("1\t silla\t 100 \n");
			printf("2\t puerta\t 350\n");
			printf("3\t sillon\t 200\n");
			printf("\npara cerrar la venta presione 4");//añadimos la opcion de cerrar la venta
			
			
			printf("\ningrese codigo de producto a llevar: ");//solicitamos el codigo del producto
			scanf("%d",&codigo);//leemos el codigo
			if(codigo==4)
				break; //si el codigo es 4 cerramos el proseso de venta
			printf("ingrese cantidad a llevar "); //solicitamos la cantidad del producto
			scanf("%d",&cantidad);//llemos la cantidad
		
			if(codigo==1) //comprobamos mediante iteraciones para asignar el valor total
			valor=100;

			if(codigo==2)
			valor=350;

			if(codigo==3)
			valor=200;
	
			total=total+(valor*cantidad); //A total le asignamos, el total acumulado hasta ahora, más el nuevo valor y nueva cantidad, multiplicados entre sí
		}
		
	printf("\nel total es de: %d",total);//mostramos el total
	while(ok==1){
	printf("\ningrese el pago "); //solicitamos el pago
	scanf("%d",&pago);//leemos el pago
	if(pago<total)//verificamos si el pago es suficiente mediante un if
		printf("\nel pago no es suficiente");
	
	else
	{
		ok=0;
		vuelto=pago-total;//obtenemos el cambio que debe recibir el cliente
		printf("\nSu cambio es de; %d",vuelto);//mostramos el cambio 
	}
		}
		codigo=0;//regresamos el valor de "codigo a 0 para evitar errores con el while principal
		printf("\n¿desea hacer otra compra? (1=si, 2=no)");
		scanf("%d,",&opcion);
	}
		printf("\nVenta finalizada gracias por su compra");
		getch();
}
