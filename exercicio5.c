/*5) Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)
para os c�digos de 0 a 127.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int i;

    // Entrada
    // N�o h�.

    // Processamento e Sa�da
    for (i = 1; i <= 127; i++)
    {
        printf("Para o n�mero %d seu correpondente em hexadecimal �:%x, em octadecimal �: %o e o caracter na tabela ASCII �: %c\n", i, i, i, i);
    }
}
