/*18) Fa�a um programa C que leia dez n�meros que representam as notas de dez alunos de 
uma disciplina. As notas variam de zero at� dez (0 a 10). O programa deve validar a
entrada de dados e obter: a soma das notas, a m�dia das notas, a maior nota, a menor
nota. Assuma que as notas s�o informadas corretamente no intervalo de 1 a 10. (0,1) */

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int notas_turma[10], i,soma_nota=0,maior_nota=0,menor_nota=10,media_nota=0;
   
    // Entrada
        printf("Digite as notas dos alunos em sequ�ncia:\n");
        for(i = 0; i < 10; i++){
            printf("Digite a %d� nota: ",i+1);
            scanf("%d",&notas_turma[i]);
            //Para obdecer o requisito de valida��o de dados:
            if (notas_turma[i] < 0 || notas_turma[i] > 10){
                printf("A �ltima nota digitada n�o est� no intervalo de 0 � 10, digite novamente:\n");
                i--;
            }
        }   

    // Processamento
        for(i = 0; i < 10; i++){
        //Para efetuar a soma e posteriormente a m�dia:
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
  
        //Para calcular a m�dia da turma.
            media_nota = soma_nota / 10;

    // Sa�da
    printf("\nA soma das notas �: %d.\nA media da turma �: %d.\nA maior nota �: %d.\nA menor nota �: %d.",soma_nota,media_nota,maior_nota,menor_nota);

}