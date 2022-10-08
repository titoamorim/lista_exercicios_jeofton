/*23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene 
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do 
qual foram digitados.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int vet[6], i;

    // Entrada
    //Receber os 10 valores no vetor principal
    printf("Digite 6 números: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento e saída
    for (i = 5; i >=0; i--)
    {
            printf("%d ", vet[i]);
    }
}