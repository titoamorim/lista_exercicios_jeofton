/*5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int i;

    // Entrada
    // Não há.

    // Processamento e Saída
    for (i = 1; i <= 127; i++)
    {
        printf("Para o número %d seu correpondente em hexadecimal é:%x, em octadecimal é: %o e o caracter na tabela ASCII é: %c\n", i, i, i, i);
    }
}
