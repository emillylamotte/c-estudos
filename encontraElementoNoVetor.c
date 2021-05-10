/*Algoritmo que considera um vetor com 30 elementos. Verifica se existe um elemento no vetor que seja igual ao valor k
(lido no algoritmo). Se existir, mostrar a posição em que se encontra no vetor, senão, imprimir “Não foi
encontrado o valor no vetor*/

#include <stdio.h>

int main()
{
    int vetor[30] = {1,2,3,4,5,6,7,8,9,10,11,11,11,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int k;
    
    printf("Digite um valor k:\n");
    scanf ("%d", &k);
    
    int i =0; 
    int cont = 0;
    
    for(i=0;i<30;i++)
    {
        if (vetor[i] == k)
        {
            printf ("O elemento %d do vetor eh igual a k\n", i);
            cont = 1;
        }
    }
    if (cont == 0)
    {
        printf ("Nao foi encontrado o valor no vetor\n");
    }
    

    return 0;
}
