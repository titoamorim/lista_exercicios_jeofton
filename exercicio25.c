/*25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
valores é igual a média dos mesmos. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int vet[10], i, soma_vet = 0, media_vet=0;

    // Entrada
    // Receber os 10 valores no vetor principal
    printf("Digite 10 valores inteiros, caso um  ou mais deles sejam iguais a média irão aparecer na tela: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        soma_vet = soma_vet + vet[i];
    }

    // Processamento e saída
    media_vet = soma_vet / 10;

    for (i = 0; i < 10; i++)
    {
        if (media_vet == vet[i])
        {
            printf("\nO número %d, na posição %d é igual a média %d.",vet[i],i+1,media_vet);
        }
    }

}