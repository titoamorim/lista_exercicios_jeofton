/*Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dos
exerc�cios realizados por ele. Calcular a m�dia de aproveitamento, usando a f�rmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia, informar o conceito de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    float N1,N2,N3,ME,MA;

    // Entrada
    printf("Informe as 3 notas e a m�dia dos exerc�cios de um aluno: ");
    scanf("%f",&N1);
    scanf("%f",&N2);
    scanf("%f",&N3);
    scanf("%f",&ME);


    // Processamento e Sa�da
    MA = (N1 + N2*2 + N3*3 + ME)/7;
    printf("A nota do aluno �: %.1f. \n",MA);
    
    if (MA >= 9){
       printf("O Conceito do aluno �: A.");
        } else if (MA >= 7.5 &&	 MA < 9) {
        printf("O Conceito do aluno �: B.");
   	    } else if(MA >= 6 && MA < 7.5) {
        printf("O Conceito do aluno �: C.");
  		} else if(MA >= 4 && MA < 6) {
        printf("O Conceito do aluno �: D.");
 	    } else if(MA < 4) {
        printf("O Conceito do aluno �: E.");
    }


}