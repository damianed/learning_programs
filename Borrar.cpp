#include <iostream>
#include <cstdlib>

using namespace std;
int caracol (int size){
	int matriz[size][size];
	int tam=size;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			matriz[i][j]=0;
			}
		}
	int aux=1,fila=0;
	while(aux<=size*size){	
		for(int i=0;i<tam;i++){
			matriz[fila][i]=i+1;
			aux++;
		}
		
		for(int i=0;i<tam;i++){
			matriz[fila+i][tam-1]=tam+i;
			aux++;
		}
		
		for(int i=0;i<tam-1;i++){
			matriz[tam-1][size-1-i]=2*tam-1+i;
			aux++;
		}
		
		for(int i=0;i<tam-1;i++){
			matriz[tam-1-i][0]=3*tam-2+i;
			aux++;
		}
		tam--;
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout << matriz[i][j];
			cout <<"\t";
			}
			cout << endl;
		}
	return NULL;
}
main(){
	int size;
	cin >> size;
	caracol(size);
	return 0;
}


