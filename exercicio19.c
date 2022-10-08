/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int vet[5] = {10, 80, 30, 40, 70}, i, maior = 0;

    // Entrada - Não há requisito de entrada, por isso os valores do vetor já foram atribuídos.
    // Processamento
    for (i = 0; i < 5; i++)
    {
        if (maior < vet[i])
        {
            maior = vet[i];
        }
    }

    // Saída
    printf("O maior valor do vetor é: %d.", maior);
}