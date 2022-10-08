/*16) Dados um número natural n, exiba seu fatorial n!. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int fat,i;

    // Entrada
printf ("Digite um número para que seja calculado o seu fatorial: ");
scanf("%d",&fat);

    // Processamento e Saída
   
   for (i = fat-1; i > 1;i--){
    fat = fat * i;    
   }

   printf ("%d ",fat);
}