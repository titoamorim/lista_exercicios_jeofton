/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto. */

#include <stdio.h>
#include <locale.h>


int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int num, i, soma_quadrado = 0, cont;

    // Entrada
    printf("Digite um número para que seja calculado a raiz quadrada: ");
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
    // Saída
    printf("o valor do quadrado do número %d é: %d.", num, soma_quadrado);
}