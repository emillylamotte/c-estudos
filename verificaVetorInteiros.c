/*Algoritmo que verifica o menor e o maior valor de um vetor de inteiros de tamanho n*/
#include <stdio.h>
#define tamanho 5


int *res1, *res2;
int maximo = -100;
int minimo=100;


void MinMax (int *p, int*maximo, int*minimo){
    int  i = 0;
    while (i < tamanho){
        if (*p > *maximo){
            *maximo = *p;
        }
        if (*p< *minimo){
            *minimo = *p;
        }
        p++;
        i++;
    }
    
}

 int main(){
     
     int vetor[tamanho];
     res1 = &maximo;
     res2 = &minimo;
     int i = 0;
   
    printf ("\nDigite %d numeros INTEIROS: \n", tamanho);
   
     for (i=0; i<tamanho;i++){
         scanf ("%d", &vetor[i]);
     }
  
  MinMax (vetor,res1,res2);
  printf ("O maior valor desse vetor de inteiros eh %d e o menor valor eh %d", *res1,*res2);
    
    return 0;
    
 }
