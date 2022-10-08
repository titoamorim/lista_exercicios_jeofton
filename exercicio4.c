/*4) Faça um programa que lê dois valores e imprime:
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int num1, num2, i;

    // Entrada
    printf("Insira dois valores: ");
    scanf("%d %d", &num1, &num2);

    // Processamento
    if (num1 < num2)
    {
        for (i = num1; i <= num2; i++)
            printf("%d\t", i);
    }
    else
    {
        for (i = num2; i >= num1; i--)
            printf("%d\t", i);
    }

    // Saída
    // Não há.
}