/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses 
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse 
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em 
seguida, o programa deverá apresentar na tela os resultados.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int vet[10], soma_par=0, sub_impar=0, i;

    // Entrada
    //Receber os 10 valores no vetor principal
    printf("Digite 10 números: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento
    //Criar um laço condicional para calcular soma dos pares e subtração dos impares
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            soma_par = soma_par + vet[i];
        }
    }

for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 1)
        {
            sub_impar = sub_impar - vet[i];
        }
    }

    // Saída
    //Imprimir os respectivos resultados
    printf("\nEsse é o resultado da soma dos pares: ");
    printf("%d ", soma_par);

    printf("\nEsse é o resultado da soma dos impares: ");
    printf("%d ", sub_impar);

}