#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int matriz[3][3];//declaramo la matriz

int main(){
	for(int i=1;i<=3;i++){//definimos un ciclo para las filas
	for(int j=1;j<=3;j++){//definimos otro ciclo para las columnas
		printf("Ingrese el valor de la fila %d y la culumna %d ",i,j);
		scanf("%d",&matriz[i][j]);
	}
	}
	printf("Los valores ingresados son: \n");
	for(int i=1;i<=3;i++){//mostrando los valores ingresados, tabulando y dando salto de linea para dar forma de matriz
	for(int j=1;j<=3;j++){
		printf("%d\t",matriz[i][j]);
	}
	printf("\n");
		}
	getch();
}
