/*15) Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int i;

    // Entrada
    // N�o h�

    // Processamento e Sa�da
    printf("Numeros pares de 1 � 50:\n");

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}