#include<stdlib.h>
#include <stdio.h>

int main()
{
  int ***matriz;
  int m,n,o,i,j,k;
  
    printf ("Informe a dimensão 1:\n ");
    scanf ("%d",&m);
    printf ("Informe a dimensão 2:\n ");
    scanf ("%d",&n);
    printf ("Informe a dimensão 3:\n ");
    scanf ("%d",&o);

//alocando valores
    matriz = calloc(m,sizeof(int));
    for (i = 0; i < m; i++) 
    {
    matriz[i] = calloc(n, sizeof(int));
    }
    for (j = 0; j < m; j++) 
    {
        for (k = 0; k < n; k++) 
        {
        matriz[j][k] = calloc(o,sizeof(int));
        }
    }
    
   //recebendo elementos da matriz
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for (k=0;k<o;k++)
            {
                printf("Elemento[%d][%d][%d] = \n",i,j,k);
                scanf("%d",&matriz[i][j][k]);
            }
        }
    }
    printf ("\n\n");
    
   //mostrando a matriz inserida 
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for (k=0;k<o;k++)
            {
                printf("Elemento[%d][%d][%d] =  ",i,j,k);
                printf(" %d \n",matriz[i][j][k]);
            }
        }
    }
    
    printf ("\n\n");
    
    //desalocando a memoria
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            free (matriz[i][j]);
        }
    
            
    for (k=0;k<o;k++)
    {
         free (matriz[k]);
    }
        free (matriz);
    }
    return 0;
}
