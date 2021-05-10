/*Algoritmo que recebe os dados cadastrais de n funcionários, armazenando-os em uma struct e exibindo a lista de funcionários*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario
{
    char cod[4];
    char sexo[2];
    char idade[3];
    char salario[5];
};

int main()
{
    int i=0;
    int N=10; 
    int codigo=0;  
    struct funcionario func[N];
    int x=0;       

      while(codigo>=0)
     
      {
        puts("Informe o codigo:");
        gets(func[x].cod); 
        puts("Informe a idade");
        gets(func[x].idade); 
        puts("Informe o sexo:");
        gets(func[x].sexo);
        puts("Informe o salario:");
        gets(func[x].salario); 
        codigo = atoi(func[x].cod); //converte a string <func[i].cod> para o tipo inteiro <codigo>
        x++; 
      }          
      
      printf("Dados obtidos:\n");                     
      for (i=0; i<x; i++)
      {
        printf("\n");
        printf ("Funcionario %d", i+1);
        printf("\n");   
        puts("Codigo: ");
        puts(func[i].cod);
        puts("Idade: ");            
        puts(func[i].idade);
        puts("Sexo: ");
        puts(func[i].sexo);
        puts("Salario: ");
        puts(func[i].salario);
        printf("\n");
     }
            
      return 0;
}
