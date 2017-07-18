#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	for(int i=0;i<=255;i++){
		if(i<10)
		printf("0%d (%c)\n",i,i);
	else	
	printf("%d (%c)\n",i,i);
}
printf("Presiona cualquier tecla para salir..."); 
	getch();
}
