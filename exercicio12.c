/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem � o mais velho. Considere que essas pessoas possuem idades diferentes. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
  int idade_pedro, idade_joana, idade_ismael,i;

    // Entrada
  printf ("digite a idade de Pedro, de joana e de ismael: \n");
  scanf ("%d %d %d", &idade_pedro,&idade_joana,&idade_ismael);


    // Processamento e Sa�da
   if (idade_pedro > idade_joana && idade_pedro > idade_ismael) 
   {
    printf("pedro � o individuo mais velho.");
   } else if (idade_joana > idade_pedro && idade_joana > idade_ismael ) 
   {
    printf("Joana � o individuo mais velho.");
   } else {
    printf("Ismael � o individuo mais velho.");
   }
   
}