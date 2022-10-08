/*Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
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

    // Variáveis
    float N1,N2,N3,ME,MA;

    // Entrada
    printf("Informe as 3 notas e a média dos exercícios de um aluno: ");
    scanf("%f",&N1);
    scanf("%f",&N2);
    scanf("%f",&N3);
    scanf("%f",&ME);


    // Processamento e Saída
    MA = (N1 + N2*2 + N3*3 + ME)/7;
    printf("A nota do aluno é: %.1f. \n",MA);
    
    if (MA >= 9){
       printf("O Conceito do aluno é: A.");
        } else if (MA >= 7.5 &&	 MA < 9) {
        printf("O Conceito do aluno é: B.");
   	    } else if(MA >= 6 && MA < 7.5) {
        printf("O Conceito do aluno é: C.");
  		} else if(MA >= 4 && MA < 6) {
        printf("O Conceito do aluno é: D.");
 	    } else if(MA < 4) {
        printf("O Conceito do aluno é: E.");
    }


}