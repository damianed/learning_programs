#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int codigo, cantidad, valor, total, vuelto, pago; //declaramos todas las variables tipo int que necesitaremos

int main()
{
	printf("\t lidta de productos\n ");//Partimos por listar los productos, utilizamos \t para separar los textos, tal como si utilizaramos la tecla TAB
	printf("codigo\t nombre\t precio\n");
	printf("1\t silla\t 100 \n");
	printf("2\t puerta\t 350\n");
	printf("3\t sillon\t 200\n");
	
	printf("ingrese codigo de producto a llevar ");//solicitamos el codigo del producto
	scanf("%d",&codigo);//leemos el codigo
	printf("ingrese cantidad a llevar "); //solicitamos la cantidad del producto
	scanf("%d",&cantidad);//llemos la cantidad
	
	if(codigo==1) //comprobamos mediante iteraciones para asignar el valor total
	valor=100;

	if(codigo==2)
	valor=350;

	if(codigo==3)
	valor=200;
	
	total=valor*cantidad; //multiplicamos el valor por la cantidad para obtener el total
	
	printf("\nel total es de: %d",total);//mostramos el total
	printf("\ningrese el pago "); //solicitamos el pago
	scanf("%d",&pago);//leemos el pago
	if(pago<total)//verificamos si el pago es suficiente mediante un if
		printf("\nel pago no es suficiente");
	
	else
	{
		vuelto=pago-total;//obtenemos el cambio que debe recibir el cliente
		printf("\nSu cambio es de; %d",vuelto);//mostramos el cambio 
		
		}
		printf("\nVenta finalizada gracias por su compra");
		getch();
}

