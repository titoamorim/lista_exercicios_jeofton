/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
  int idade_pedro, idade_joana, idade_ismael,i;

    // Entrada
  printf ("digite a idade de Pedro, de joana e de ismael: \n");
  scanf ("%d %d %d", &idade_pedro,&idade_joana,&idade_ismael);


    // Processamento e Saída
   if (idade_pedro > idade_joana && idade_pedro > idade_ismael) 
   {
    printf("pedro é o individuo mais velho.");
   } else if (idade_joana > idade_pedro && idade_joana > idade_ismael ) 
   {
    printf("Joana é o individuo mais velho.");
   } else {
    printf("Ismael é o individuo mais velho.");
   }
   
}