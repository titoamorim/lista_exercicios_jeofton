/*3) Escreva um programa que leia um número na base decimal e em seguida imprima esse
mesmo número nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int num;

    // Entrada
    printf("Insira um valor em número decimal:");
    scanf("%d", &num);

    // Processamento
    printf("O número %d em hexadecimal é: %x, e em octadecimal é %o.", num, num, num);

    // Saída
    // Não há.
}