#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
double cant1, cant2, cant3, tot, porc1, porc2 ,porc3;
int main(){
		printf("Ingrese la cantidad invertida del primer socio ");
		scanf("%lf",&cant1);
		
		printf("Ingrese la cantidad invertida del segundo socio ");
		scanf("%lf",&cant2);
		
		printf("Ingrese la cantidad invertida del tercer socio ");
		scanf("%lf",&cant3);
		
		printf("Ingrese el total obtenido con la inversion ");
		scanf("%lf",&tot);
		//acontinuacion convierto la cantidad ingresada en el porcentaje de el tototal del dinero invertido
		porc1=cant1*100/(cant1+cant2+cant3);
		porc2=cant2*100/(cant1+cant2+cant3);
		porc3=cant3*100/(cant1+cant2+cant3);
		
		//acontinuacion imprimo la cantidad correspondiente a cada socio
		printf("\nLa parte del segundo socio es: %.2lf",(porc1*tot)/100); 
		printf("\nLa parte del primer socio es: %.2lf",(porc2*tot)/100);
		printf("\nLa parte del tercer socio es: %.2lf",(porc3*tot)/100);
		
		printf("\nPresione cualquier tecla para salir...");
	getch();
	
	}
