//Algoritmo que insere elementos em uma Pilha: Last In First Out
//Emilly Lamottte
#include<stdio.h>
#include<stdlib.h>

int pilha[10];
int ini,fim;
int tam;
int p = 0;//indicar se existe pilha criada

void criapilha()
{
    ini=0;
    fim=0;
    p=1;
    printf ("Pilha criada \n");
}

void inserepilha()
{
    if (p==1)
    {
        if (tam<3)
        {
        tam++; //controla nro de elemntos na pilha
        printf ("Informe elemento a inserir: ");
        scanf ("%d",&pilha[fim]);
        fim++;
        }
        else 
        {
            printf ("Pilha cheia \n");
        }
    }
    else 
    {
        printf ("Pilha não existe\n");
    }
}

void removepilha()
{
    if (p==1)
    {
        if (fim!=0)
        {
            fim--;
            tam--;
            printf ("Elemento removido \n");
        }
        else 
        {
            printf ("Pilha vazia - Impossivel remover\n");
        }
    }   
    else 
    {
        printf ("Pilha não existe\n");
    }
}

void imprimepilha()
{
    if (p==1)
    {
        int i;
        if (fim!=0)
        {
            for(i=ini;i<fim;i++)
            {
            printf("Pilha[%d] = %d\n", i,pilha[i]);
            }
        }
        else 
        {
            printf ("Pilha vazia \n");
    
        }  
    }
    else 
    {
        printf ("Pilha não existe\n");
    }
}

int main()
{

    int i, op;
    
    int tam=10;
    
    printf("Informe a opcao <0>Cria <1>Insere <2>Remove <3>Imprime <4>Sair \n");
    scanf("%d",&op);

    while (op!=4)
    {
        if (op==0)
        criapilha();
        
        if (op==1)
        inserepilha();
    
        if (op==2)
        removepilha();
        
        if (op==3)
        imprimepilha();
    
        printf("Informe a opcao <0>Cria <1>Insere <2>Remove <3>Imprime <4>Sair \n");
        scanf("%d",&op);
    
    }

printf ("Voce saiu \n");

return 0;
}


