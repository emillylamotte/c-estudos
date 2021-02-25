//Algoritmo que ordena os elementos do vetor a partir do método Bubble Sort
//Emilly Lamotte
#include <stdio.h>
#include <stdlib.h>
int main() {
	int tam,i, j, temp;
	//Determinar tamanho do vetor
	printf ("Digite a quantidade de elementos do vetor:   ");
	scanf ("%d", &tam);
	printf ("\n");
	int vet[tam];
	//Ler elementos
	for (i = 0; i<tam; i++)
	{
		printf ("Informe o elemento (%d) do vetor:    ",i);
		scanf ("%d", &vet[i]);
		printf ("\n");
	}
	printf ("\n");
	//Printar elementos
	printf ("Vetor inserido:\n");
	for (i = 0; i<tam; i++)
	{
		printf (" Elemento (%d): %d\n", i, vet[i]);
	}
	printf ("\n");
	//Ordenar usando metodo bubblesort
	for (i=0; i<tam; i++)
	{
		for (j=0; j<(tam-1); j++)
		{
			if (vet[j]>vet[j+1]) //comparando elementos vizinhos
			{
				temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
				
			}
		}	
	}
	//Printar elementos ordenados
	printf ("Vetor ordenado por Bubble Sort:\n");
	for (i = 0; i<tam; i++)
	{
		printf (" Elemento (%d): %d\n", i, vet[i]);
	}

	return 0;
}

