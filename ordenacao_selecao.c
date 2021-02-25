//Algoritmo que ordena elementos usando o metodo de seleção 
// Emilly Lamotte
#include <stdio.h>
int main () 
{
	int i, j, vet[5], menor, temp;
	//LER ELEMENTOS
	for (i = 0; i<5; i++)
	{
		printf ("Informe o elemento (%d) do vetor: \n ",i);
		scanf ("%d", &vet[i]);
	}
	printf ("\n");
	//PRINTAR ELEMENTOS
	printf ("Vetor inserido:\n");
	for (i = 0; i<5; i++)
	{
		printf (" Elemento (%d): %d\n", i, vet[i]);
	}
	printf ("\n");
	//ORDENAR POR SELEÇÃO
	for (i=0; i<4; i++)
	{
	    menor = vet[i];
	    temp = i;
		for (j=i+1; j<5; j++)
		{
			if (vet[j]<menor)
			{
				menor = vet[j];
				temp = j;
			}
		}	
	vet [temp] = vet[i];
	vet [i] = menor;
	}
	//PRINTAR ELEMENTOS ORDENADOS
	printf ("Vetor ordenado por selecao:\n");
	for (i = 0; i<5; i++)
	{
		printf (" Elemento (%d): %d\n", i, vet[i]);
	}

}


