/*21) Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio. Separe esses
n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e
�mpares, exibindo os resultados na tela.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int vet[12], vet_par[12], vet_impar[12], i, j = 0, k = 0;

    // Entrada
    //Receber os 12 valores no vetor principal
    printf("Digite 12 n�meros: \n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento
    //Criar um la�o condicional para preencher os vetores secund�rios
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
    //criar um la�o para determinar tamanho exato das impress�es baseado no n�mero de itens escritos em cada um dos vetores (evitar carregar lixo)
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

    // Sa�da
    //Imprimir os respectivos valores de cada vetor com seus tamanhos corretos
    printf("\nEsses s�o os n�meros pares: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", vet_par[i]);
    }

    printf("\nEsses s�o os n�meros impares: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", vet_impar[i]);
    }
}