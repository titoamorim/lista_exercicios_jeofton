/*11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int n_alunos, n_alunas;

    // Entrada
    printf("Digite o número de alunos: ");
    scanf("%d", &n_alunos);

    printf("Digite o número de alunas: ");
    scanf("%d", &n_alunas);

    // Processamento e Saída
    printf("\n");

    if (n_alunos > n_alunas)
    {
        printf("Essa turma possui mais alunos\n");
    }
    else if (n_alunos < n_alunas)
    {
        printf("Essa turma possui mais alunas que alunos.\n");
        printf("O número total de alunos dessa turma é: %d\n", (n_alunas + n_alunos));
    }
    else
    {
        printf("O número de alunos e alunas é igual.");
    }
}