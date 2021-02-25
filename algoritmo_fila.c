//Algoritmo que insere elementos em uma Fila
//Emilly Lamotte
#include <stdio.h>
struct fila
{
   int elem;
};
int tam = 0;
int inicio;
int fim = 0;
void insere(struct fila f1[5])
{
    if (tam==5)
    {
        printf ("FILA CHEIA!\n");
    }
    else
    {
     printf ("Informe o elemento a ser inserido:   ");
     scanf ("%d",&f1[fim].elem);
     tam++;
     fim++;
     printf ("Elemento inserido com sucesso!\n");
    }
}
void remover(struct fila f1[5])
{
    int opcao;
    printf ("Deseja remover o elemento %d da fila?   <1>Sim  <2> Nao -->   ", f1[inicio].elem);
    scanf ("%d", &opcao);
    if (opcao == 1)
    {
    inicio++;
    tam--;
    printf ("Elemento removido!\n");
    }
}
void printarFila(struct fila f1[5])
{
    if (f1[inicio].elem == NULL)
    {
        printf ("FILA VAZIA\n");
    }
    else
    {
        printf ("FILA:\n");
        
        for (int i=inicio; i<fim; i++)
        {
            printf ("%d   ", f1[i].elem);
        }
        printf ("\n");
    }
}
int main()
{
    struct fila f[5];
    int op;
    printf("<1>Insere <2>Remove <3>Mostrar fila  <4>Sair -->   "); 
    scanf("%d",&op);
    while (op != 4)
    {
       switch(op)
       {
          case 1: 
                insere(&f);
                break;
          case 2: 
                remover(f);
                break;
          case 3: 
                printarFila(f);
                break;
          
       }
       printf("<1>Insere <2>Remove <3>Mostrar fila  <4>Sair -->   ");
       scanf("%d",&op);
    }
    printf ("\nOperação encerrada!!");
}






