/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posi��es do tipo inteiro.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int vet[5] = {10, 80, 30, 40, 70}, i, maior = 0;

    // Entrada - N�o h� requisito de entrada, por isso os valores do vetor j� foram atribu�dos.
    // Processamento
    for (i = 0; i < 5; i++)
    {
        if (maior < vet[i])
        {
            maior = vet[i];
        }
    }

    // Sa�da
    printf("O maior valor do vetor �: %d.", maior);
}