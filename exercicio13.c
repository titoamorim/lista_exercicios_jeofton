/*13) Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares 
menores e/ou iguais a esse n�mero e maiores ou igual a um.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int num,i;

    // Entrada
    printf ("Digite um n�mero positivo: ");
    scanf ("%d",&num);

    // Processamento e Sa�da

    for (i = num; i >= 1; i--){
        
        if (i % 2 == 1){
            printf("%d ",i);
        }
    }
   
}