void ordering_array(long int num[], int length){
	int i,j, temp;
	bool flag =true;//esta bandera sirve para saber si se ha echo un cambio o no
	
	for(i=0;(i<length) && flag;i++){//que se repita para que todos los numero queden en el lugar correcto
		flag=false;
		for(j=0;j<length-1;j++){//que se repita por todo el array
			
			if(num[j+1]>num[j]){
				
				temp=num[j+1];//se guarda el numero mayor en la variable tamp
				
				num[j+1]=num[j];//se guerda el numero mas chico la posision del array mas chica
				
				num[j]=temp;// se guarda el numero mas grande en la posicion mas grande
				flag=true; // se ha echo un cambio en el oreden del array
			}
		}
		
	}
	return;
	
	//MAYOR EXPLICANCION EN http://mathbits.com/MathBits/CompSci/Arrays/Bubble.htm
