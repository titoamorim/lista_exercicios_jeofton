/*16) Dados um n�mero natural n, exiba seu fatorial n!. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int fat,i;

    // Entrada
printf ("Digite um n�mero para que seja calculado o seu fatorial: ");
scanf("%d",&fat);

    // Processamento e Sa�da
   
   for (i = fat-1; i > 1;i--){
    fat = fat * i;    
   }

   printf ("%d ",fat);
}