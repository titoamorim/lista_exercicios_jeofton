/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    char nome1[25], nome2[25];

    // Entrada
    printf("Digite o primeiro nome: \n");
    gets(nome1);
    printf("Digite o segundo nome: \n");
    gets(nome2);

    // Processamento e sa�da
    printf("\nNomes em ordem alfab�tica:\n");
    if (strcmp(nome1, nome2) == -1)
    {
        printf("%s\n%s", nome1, nome2);
    }
    else
    {
        printf("%s\n%s", nome2, nome1);
    }
}