/*25) Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos
valores � igual a m�dia dos mesmos. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int vet[10], i, soma_vet = 0, media_vet=0;

    // Entrada
    // Receber os 10 valores no vetor principal
    printf("Digite 10 valores inteiros, caso um  ou mais deles sejam iguais a m�dia ir�o aparecer na tela: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        soma_vet = soma_vet + vet[i];
    }

    // Processamento e sa�da
    media_vet = soma_vet / 10;

    for (i = 0; i < 10; i++)
    {
        if (media_vet == vet[i])
        {
            printf("\nO n�mero %d, na posi��o %d � igual a m�dia %d.",vet[i],i+1,media_vet);
        }
    }

}