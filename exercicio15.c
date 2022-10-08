/*15) Faça um programa que mostre todos os números pares existentes entre 1 e 50.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int i;

    // Entrada
    // Não há

    // Processamento e Saída
    printf("Numeros pares de 1 à 50:\n");

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}