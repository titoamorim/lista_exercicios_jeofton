/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas t�m de estar no intervalo [0 10]) e imprime para cada um a
m�dia das notas. O programa deve parar imediatamente ap�s ter sido digitado o valor 50 para
a nota da primeira prova.*/

#include <stdio.h>
#include <locale.h>

int main()

{
    // Este programa est� setado para PT-BR Use ',' ao inv�s de '.' para separar os n�meros decimais.
    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    float nota1, nota2, media;
    int cont;

    // Entrada
    // N�o h�

    // Processamento
    while (nota1 != 50)
    {

        printf("Para interromper o programa digite 50 na primeira nota. \n\n");
        printf("No intervalo de 0 � 10, digite a primeira nota da prova e em seguida a segunda nota: \n");
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;

        if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
        {
            printf("A media das duas notas e: %.1f\n\n", media);
        }
        else if (nota1 < 0 || nota1 > 10 && nota1 != 50 || nota2 < 0 || nota2 > 10)
        {
            printf("N�mero inv�lido. Digite um n�mero de 0 � 10.\n\n");
        }
        else
        {
            printf("Voc� encerrou o programa.\n\n");
        }
    }

    // Sa�da
    // N�o h�
}