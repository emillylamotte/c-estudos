/* Algoritmo que calcula a soma das linhas e colunas de uma matriz de ordem n*/
#include <stdio.h>
#include <stdlib.h>
#define ordem 5

int main()
{
    int i, j, somalinha=0, somacoluna=0, somat=0;
    int str[ordem][ordem];

    for (i=0; i<ordem; i++)
    {
        for (j=0; j<ordem; j++)
        {
            printf("\nDigite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &str[i][j]);
        }
    }

    for (i=0; i<ordem; i++)
    {
        for (j=0; j<ordem; j++)
        {
            printf("[ %d ]", str[i][j]);
            if (j==ordem-1)
            printf("\n");
            else 
            printf("\t");
        }
    }

    for (i=0; i<ordem; i++)
    {
        for (j=0; j<ordem; j++)
        {
            if(i == ordem - 1)
            {
                somalinha += str[i][j];
            }
            if(j == ordem - 1)
            {
                somacoluna += str[i][j];
            }
        }
    }
    printf("A soma das linhas é: %d \n", somalinha);
    printf("A soma das colunas é: %d \n", somacoluna);
    
    somat = somalinha + somacoluna;
    printf("\nA soma das linhas e colunas é: %d\n",somat);
}
 
