/*Algoritmo que calcula quantos dias foram decorridos naquele ano até a data inserida. 
Ex: 9/4/2021 - 100 dias decorridos
O algoritmo também verifica se o ano inserido é bissexto e adiciona um dia no mês de Fevereiro
*/
#include <stdio.h>

int bissexto (int ano)
{
    if((( ano % 4 == 0)&&(ano %100 != 0))||(ano % 400 ==0))
    {
        int teste = 1; 
        printf("%d eh um ano bissexto \n", ano );
        return teste;
    }
    else{
        int teste = 0;
        printf("%d nao eh um ano bissexto \n", ano );
        return teste;
  }
}
void diasdomes(int m, int t){
      int mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (t == 1)
        {
            mes[1] = 29; 
            printf("Fevereiro tem %d dias\n", mes[1]);
        }
        else
        {
            printf("Fevereiro tem %d dias\n", mes[1]);
        }
}  
void conta_dias(int t, int d, int m, int a)
{
    int totalDecorrido, diasAno, diasMes;
    int resultado = 0;
    int mes[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (t==1)
    {
        mes[2] = 29; 
    }
    
    for (int i=0; i<=m; i++)
    {
       int aux = m;
       totalDecorrido += (mes[i]);
       diasMes = mes[m]-d;
       resultado= totalDecorrido - diasMes;
    }
    printf("O total de dias decorridos ate essa data sao %d dias\n", resultado);
}

int main()
{
    int biss = bissexto(2020); 
    diasdomes(2, biss);
    conta_dias(biss, 9, 4, 2020);
}
