/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin:*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float temp_fah, temp_kel, temp_cel;

    // Entrada
    printf("Digite aqui a temperatura em Fahrenheit:");
    scanf("%f", &temp_fah);

    // Processamento

    temp_cel = (temp_fah - 32) / 1, 8;
    temp_kel = ((temp_fah - 32) * 5 / 9 + 273.15);
    printf("A temperatura em Kelvin é de: %.2f, e em celsius é de: %.2f.", temp_kel, temp_cel);

    // Saída
    // Não há.
}