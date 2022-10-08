/*21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int vet[12], vet_par[12], vet_impar[12], i, j = 0, k = 0;

    // Entrada
    //Receber os 12 valores no vetor principal
    printf("Digite 12 números: \n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento
    //Criar um laço condicional para preencher os vetores secundários
    for (i = 0; i < 12; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vet_par[j] = vet[i];
            j++;
        }
        else
        {
            vet_impar[k] = vet[i];
            k++;
        }
    }
    //reiniciar os contadores
    j = 0;
    k = 0;
    //criar um laço para determinar tamanho exato das impressões baseado no número de itens escritos em cada um dos vetores (evitar carregar lixo)
    for (i = 0; i < 12; i++)
    {
        if (vet[i] % 2 == 0)
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    // Saída
    //Imprimir os respectivos valores de cada vetor com seus tamanhos corretos
    printf("\nEsses são os números pares: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", vet_par[i]);
    }

    printf("\nEsses são os números impares: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", vet_impar[i]);
    }
}