/*22) Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses 
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse 
vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em 
seguida, o programa dever� apresentar na tela os resultados.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int vet[10], soma_par=0, sub_impar=0, i;

    // Entrada
    //Receber os 10 valores no vetor principal
    printf("Digite 10 n�meros: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Processamento
    //Criar um la�o condicional para calcular soma dos pares e subtra��o dos impares
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

    // Sa�da
    //Imprimir os respectivos resultados
    printf("\nEsse � o resultado da soma dos pares: ");
    printf("%d ", soma_par);

    printf("\nEsse � o resultado da soma dos impares: ");
    printf("%d ", sub_impar);

}