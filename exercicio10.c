/*10) Faça um programa que receba um número inteiro e que verifique se esse número é par 
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se 
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor 
que 50. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int num;

    // Entrada
    printf("Digite um número inteiro: \n");
    scanf("%d",&num);
   

    // Processamento
   
   if ( num % 2 == 0){
    printf("O número é par.\n");

        if ( num > 15) {
            printf("O número é maior que 15.");
        } else {
            printf("O número é menor que 15.");
        }
        
   } else {
    printf("O número é ímpar.\n");

        if ( num > 50) {
            printf("O número é maior que 50.");
        } else {
            printf("O número é menor que 50.");
        }

   }

    // Saída
}