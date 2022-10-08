/*18) Faça um programa C que leia dez números que representam as notas de dez alunos de 
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a
entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor
nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10. (0,1) */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int notas_turma[10], i,soma_nota=0,maior_nota=0,menor_nota=10,media_nota=0;
   
    // Entrada
        printf("Digite as notas dos alunos em sequência:\n");
        for(i = 0; i < 10; i++){
            printf("Digite a %dº nota: ",i+1);
            scanf("%d",&notas_turma[i]);
            //Para obdecer o requisito de validação de dados:
            if (notas_turma[i] < 0 || notas_turma[i] > 10){
                printf("A última nota digitada não está no intervalo de 0 à 10, digite novamente:\n");
                i--;
            }
        }   

    // Processamento
        for(i = 0; i < 10; i++){
        //Para efetuar a soma e posteriormente a média:
            soma_nota = soma_nota + notas_turma[i];

        //Para identificar a maior nota:
            if (notas_turma[i] > maior_nota)
            {
            maior_nota = notas_turma[i];
            }
        
        //Para identificar a menor nota:
            if (notas_turma[i] < menor_nota)
            {
            menor_nota = notas_turma[i];
            }     
        }   
  
        //Para calcular a média da turma.
            media_nota = soma_nota / 10;

    // Saída
    printf("\nA soma das notas é: %d.\nA media da turma é: %d.\nA maior nota é: %d.\nA menor nota é: %d.",soma_nota,media_nota,maior_nota,menor_nota);

}