/*17) O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos. Por exemplo, 1�=1, 2�=1+3, 3�=1+3+5, 4�=1+3+5+7, etc. Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto. */

#include <stdio.h>
#include <locale.h>


int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int num, i, soma_quadrado = 0, cont;

    // Entrada
    printf("Digite um n�mero para que seja calculado a raiz quadrada: ");
    scanf("%d", &num);

    // Processamento
    cont = num;
    for (i = 1; i <= cont; i++)
    {
        if (i % 2 == 1)
        {
            soma_quadrado = soma_quadrado + i;
            cont++;
        }
    }
    // Sa�da
    printf("o valor do quadrado do n�mero %d �: %d.", num, soma_quadrado);
}