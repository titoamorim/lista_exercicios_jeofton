/*6) Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if"
ou o operador de condi��o "?".*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int preco, preco_infla;

    // Entrada
    printf("Digite o pre�o do Produto: \n");
    scanf("%d", &preco);

    // Processamento

   
    switch (preco < 100)
    {
    case 0:
        preco_infla = preco + preco * 0.2;
        printf("O pre�o inflacionado � de: %d.", preco_infla);
        break;
   

    default:
        preco_infla = preco + preco * 0.1;
        printf("O pre�o inflacionado � de: %d.", preco_infla);
        break;
    }

    // Sa�da
    // N�o h�.
}