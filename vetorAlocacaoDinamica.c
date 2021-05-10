/*Algoritmo que calcula a media dos elementos de um vetro de inteiros, com alocação dinâmica de memória*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  float *vetor;
  float media, soma;
    printf ("Digite o tamanho do vetor a ser alocado:\n");
    scanf ("%d", &n);
    
    vetor = (float *)malloc(n+sizeof(float));
    
    printf("Digite o vetor:\n");
    for (int i=0; i<n; i++)
    {
        scanf ("%f", &vetor[i]);
    }
    printf("vetor:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%.1f     ", vetor[i]);
    }
  
    soma = 0;
    
    for (int i=0; i<n; i++)
    {
       soma = soma + vetor[i];
    }
     media = soma/n;
     printf ("A media dos elementos eh %.2f", media);
    
    free (vetor);
    
    return 0;
}
