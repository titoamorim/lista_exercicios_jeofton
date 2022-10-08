/*13) Dado um número positivo, crie um programa que escreva todos os números ímpares 
menores e/ou iguais a esse número e maiores ou igual a um.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int num,i;

    // Entrada
    printf ("Digite um número positivo: ");
    scanf ("%d",&num);

    // Processamento e Saída

    for (i = num; i >= 1; i--){
        
        if (i % 2 == 1){
            printf("%d ",i);
        }
    }
   
}