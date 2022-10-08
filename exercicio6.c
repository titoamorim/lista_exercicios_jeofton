/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?".*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int preco, preco_infla;

    // Entrada
    printf("Digite o preço do Produto: \n");
    scanf("%d", &preco);

    // Processamento

   
    switch (preco < 100)
    {
    case 0:
        preco_infla = preco + preco * 0.2;
        printf("O preço inflacionado é de: %d.", preco_infla);
        break;
   

    default:
        preco_infla = preco + preco * 0.1;
        printf("O preço inflacionado é de: %d.", preco_infla);
        break;
    }

    // Saída
    // Não há.
}