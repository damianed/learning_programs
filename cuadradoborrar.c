#include <stdio.h>
#include <stdlib.h>
float horas, salario;
char resp;
int eur=156;
int main(){
	do{
	printf("Ingrese la horas trabajadas durante la semana ");
	scanf("%f",&horas);
	
	if(horas<35)
		salario=horas*15;
	
	if(horas>=35)
		salario=34*15+((horas-34)*22);
		
	if(horas<0)
	printf("\nNumero de horas no valido\n");
	
	else	
	printf("\nEl salario de esta semana es %c%f",eur,salario);
	
	printf("\n¿Desea calcular otro salario? s/n ");
	scanf(" %c",&resp);
}while(resp=='s'||resp=='S');	
}
