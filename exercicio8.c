/*Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
 3 4 5 6 7
 4 5 6
 5 */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int tam, novo_tam, i, y, j, cont_espc, inicio;
    inicio = 1;
    cont_espc = 0;

    // Entrada
    printf("Digite o número ímpar: \n");
    scanf("%d", &tam);
    while (tam % 2 == 0)
        {
        printf("Esse número não é ímpar, digite um número válido. \n");
        scanf("%d", &tam); 
        }
    y = tam;
    printf("\n");

    // Processamento
    while (y > 0)
    {

        for (i = inicio; i <= tam; i++)
        {
            printf("%d", i);
        }

        printf("\n");
        cont_espc++, tam--, inicio++;

        for (j = 1; j <= cont_espc; j++)
        {
            printf(" ");
        }

        y = y - 2;
    }

    // Saída
}