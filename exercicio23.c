/*23) Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene 
em um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa do 
qual foram digitados.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int vet[6], i;

    // Entrada
    //Receber os 10 valores no vetor principal
    printf("Digite 6 n�meros: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento e sa�da
    for (i = 5; i >=0; i--)
    {
            printf("%d ", vet[i]);
    }
}