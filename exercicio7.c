/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova.*/

#include <stdio.h>
#include <locale.h>

int main()

{
    // Este programa está setado para PT-BR Use ',' ao invés de '.' para separar os números decimais.
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float nota1, nota2, media;
    int cont;

    // Entrada
    // Não há

    // Processamento
    while (nota1 != 50)
    {

        printf("Para interromper o programa digite 50 na primeira nota. \n\n");
        printf("No intervalo de 0 à 10, digite a primeira nota da prova e em seguida a segunda nota: \n");
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;

        if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
        {
            printf("A media das duas notas e: %.1f\n\n", media);
        }
        else if (nota1 < 0 || nota1 > 10 && nota1 != 50 || nota2 < 0 || nota2 > 10)
        {
            printf("Número inválido. Digite um número de 0 à 10.\n\n");
        }
        else
        {
            printf("Você encerrou o programa.\n\n");
        }
    }

    // Saída
    // Não há
}