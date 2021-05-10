/*Algoritmo que calcula a área de um círculo, quadrado ou triângulo, de acordo com a escolha do usuário */
#include <stdio.h>

int main()
{
    #define PI 3.1415
    int comando;
    float rcirc, acirc, lquad, aquad, btri, htri, atri;
    
     printf ("Bem vindo a calculadora de areas!!!\n");
     printf ("Digite 1 para area do circulo, 2 para area de um quadrado ou 3 para a area de um triangulo:\n");
     scanf ("%i", &comando);
     
     switch (comando){
         case 1:
         printf ("Digite o raio do circulo:\n");
         scanf ("%f", &rcirc);
         acirc = PI * ((rcirc)* (rcirc));
         printf ("A area do circulo eh igual a %.2f", acirc);
         break;
     
        case 2: 
         printf ("Digite a medida do lado do quadrado:\n");
         scanf ("%f", &lquad);
         aquad = (lquad)* (lquad);
         printf ("A area do quadrado eh igual a %.2f", aquad);
        break;
        
        case 3:
        printf ("Digite a medida da altura e da base do triangulo, respectivamente:\n");
        scanf ("%f %f", &htri, &btri);
        atri = (htri*btri)/2;
        printf ("A area do triangulo eh igual a %.2f", atri);  
        break;
     }
}
