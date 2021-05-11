/*Algoritmo que recebe uma frase e conta quantas palavras essa frase contém*/

#include <stdio.h>

int contaPalavras (char *p){
   int count=0;
     
   while (*p != '\0')
   {
      if (*p == ' ')
      {
          count++;
      }
    p++;
   }
     if (*p=='\0')
     {
      count++;
     }
    return count;
}

void main()
{
    char palavra[]= "Isso é um teste";
    int resultado = contaPalavras(palavra);
    printf("O total de palavras eh: %d", resultado);
}
