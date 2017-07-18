#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
int player;
int cpu;
 int main(){
		do{
		system("cls");
		printf("Seleccione la opcion deseada \nTigera=1 \nPiedra=2 \nPapel=3 \nsalir=4 \n\n");
		scanf("%d",&player);
		if(player>0 && player<4){
		
		srand(time(NULL));
		cpu=rand()%3+1;
		
		if(cpu==player){
			printf("empate");
		}
		else{
			switch(player){
				case 1: if(cpu==3)
					printf("ganaste");
					
					else 
					printf("perdiste");
					break;
				
				case 2: if(cpu==3)
					printf("perdiste");
					
					else
					printf("ganaste");
					break;
				case 3: if(cpu==2)
					printf("ganaste");
					
					else 
					printf("perdiste");
				
					break;
			}
			
		}
			getch();
	}
}while(player>0 && player<4);
 }
