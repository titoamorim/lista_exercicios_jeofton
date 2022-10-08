/*24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma 
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int valor,valor_redu,ced_100=0,ced_50=0,ced_20=0,ced_10=0,ced_5=0,ced_1=0;

    // Entrada
    //Receber os 10 valores no vetor principal
    printf("Digite um valor inteiro: \n");
    scanf("%d",&valor);

    // Processamento
    //Fazer um laõ para cada cédula abatendo a cédula e acrecentando na contagem
    valor_redu = valor;

    while (valor_redu >= 100)
    {
        valor_redu = valor_redu - 100;
        ced_100++;
    }

    while (valor_redu >= 50)
    {
        valor_redu = valor_redu - 50;
        ced_50++;
    }

    while (valor_redu >= 20)
    {
        valor_redu = valor_redu - 20;
        ced_20++;
    }

    while (valor_redu >= 10)
    {
        valor_redu = valor_redu - 10;
        ced_10++;
    }
    
    while (valor_redu >= 5)
    {
        valor_redu = valor_redu - 5;
        ced_5++;
    }

    while (valor_redu >= 1)
    {
        valor_redu = valor_redu -1;
        ced_1++;
    }

    //Saída
    printf("\n%d cédulas de R$ 100,00.\n%d cédulas de R$ 50,00.\n%d cédulas de R$ 20,00.\n%d cédulas de R$ 10,00.\n%d cédulas de R$ 5,00.\n%d cédulas de R$ 1,00.\n",ced_100,ced_50,ced_20,ced_10,ced_5,ced_1);
}