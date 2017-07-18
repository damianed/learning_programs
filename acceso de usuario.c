#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
const n=164; //definimos la n con valor de 164 para despues utilizarla como tipo char e imprimir la letra "ñ"
char pass[10];
int main(){
	char usuario[3];
	printf("Para acceeder porfavor ingrese el nombre de usuario ");
	scanf("%s",&usuario);
	if(usuario=='d'){
		printf("\nprofavor ingrese su contrase%ca ",n);
		scanf(" %s",&pass);//por alguna razon al programa no permite la  entrada del dato y se salta a el siguiente else (solucionado)
		if(pass=="eduardo")
			system("\"c:\\documentos\"");//el prgrama no reconose la aplicacion o aun no conozco el comado correcto
		
		else{
		printf("\ncontrase%ca incorrecta ACCESO DENEGADO!!",n);
	}
	}
	else{
		printf("\nusuario incorrecto ACCESO DENEGADO!!");
	}
   getch();
}
