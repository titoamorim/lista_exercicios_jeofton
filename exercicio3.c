/*3) Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse
mesmo n�mero nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int num;

    // Entrada
    printf("Insira um valor em n�mero decimal:");
    scanf("%d", &num);

    // Processamento
    printf("O n�mero %d em hexadecimal �: %x, e em octadecimal � %o.", num, num, num);

    // Sa�da
    // N�o h�.
}