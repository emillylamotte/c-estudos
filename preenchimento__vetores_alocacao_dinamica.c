/******************************************************************************
Faça um programa que preencha dois vetores vet1 e vet2 dinamicamente, cuja quantidade de elementos deverá ser informado, pelo teclado, 
pelo usuário, com números inteiros e calcule e armazene em um vetor:
a – a diferença entre vet1 e vet2, isto é, todos os elementos de vet1 que não existam em vet2, sem repetições.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,encontrou;
    int *vet1;
    int *vet2;
    int *vetdif;
    int tam1, tam2, tam3;
    
    printf ("Digite o tamanho do vetor 1 a ser alocado:\n");
    scanf ("%d", &tam1);
    printf ("Digite o tamanho do vetor 2 a ser alocado:\n");
    scanf ("%d", &tam2);
    tam3=0;
    
    //alocação
    vet1 = (int *)malloc(tam1*sizeof(int));
    vet2 = (int *)malloc(tam2*sizeof(int));
    vetdif = (int *)malloc(tam3*sizeof(int));
    
    //leitura
    for (i=0; i<tam1; i++)
    {
        printf ("Digite o elemento %d do vetor 1:\n", i);
        scanf ("%d", &vet1[i]);
    }
    
    for (i=0; i<tam2; i++)
    {
        printf ("Digite o elemento %d do vetor 2:\n", i);
        scanf ("%d", &vet2[i]);
    }
    
    //exibir vetores
    printf ("Vetor 1:\n");
    for (i=0; i<tam1; i++)
    {
        printf ("%d   ", vet1[i]);
        
    }
    printf ("\n");
    printf ("Vetor 2:\n");
    for (i=0; i<tam2; i++)
    {
         printf ("%d   ", vet2[i]);
    }
    printf ("\n");
     
    //definindo o vetor diferença
    for (i=0; i<tam1; i++)
   {
       for (j=0; j<tam2; j++)
       {
           if (vet1[i] == vet2[j])
           {
               encontrou=1;
               break; 
           }
           if (encontrou==0)
           {
            realloc(vetdif,(tam3+1)*sizeof(int)); 
            vetdif[tam3] = vet1[i];
            tam3++;
               
          }
       }
    }
    
  //Printando o vetor diferença
   printf ("O vetor diferença eh:\n");
   for (i=0; i<tam3; i++)
   {
        printf (" %d \n", vetdif[i]);
   }
    
    //liberando a memoria
    free (vet1);
    free (vet2);
    free (vetdif);
    
    
    return 0;
}
