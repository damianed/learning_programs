    #include <stdio.h>  
    #include <conio.h>  
    #include <stdlib.h> // Incluimos las librer�as  
      
    int main()  
    {  
        int arreglo[5], aux, i, j;   
      
        /* Declaramos las siguientes variables: 
     
            arreglo = Un vector de 5 posiciones donde tendremos los valores. 
            i,j = Variables para recorrer el vector. 
            aux = Variable para guardar un valor mientras lo ordenamos 
        */  
      
        printf ("Ingrese valores para llenar el vector:\n"); // Mostramos un mensaje e introducimos valores al vector  
        for (i=0; i< 5; i++)  
            scanf("%d",&arreglo[i]);  
      
        /* Luego, ordenamos el vector mediante el algoritmo de burbuja: 
     
            Recorremos el vector con una variable m�s adelantada que la otra y 
            comparamos. Si el valor de la posici�n actual es mayor al de una 
            posici�n m�s, guardamos el valor actual en la variable auxiliar, 
            luego en la posici�n actual ponemos el valor de la posici�n siguiente 
            y en la posici�n siguiente guardamos el valor de la variable auxiliar 
        */  
      
        for (j=1; j <= 5; j++)  
            for (i=0; i< 4; i++)  
                if (arreglo[i] > arreglo[i+1])  
                {  
                    aux = arreglo[i];  
                    arreglo[i] = arreglo[i+1];  
                    arreglo[i+1] = aux;  
                }  
      
        printf ("\nValores ordenados exitosamente!\n");  
      
        // Mostramos el vector ordenado  
        for (i=0; i< 5; i++)  
            printf ("arreglo[%d] = %d\n", i, arreglo[i]);  
      
        getch();  
    }  
