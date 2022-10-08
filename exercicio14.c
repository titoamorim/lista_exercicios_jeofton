/*14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc 
é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que 
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 
1 em 1.*/

#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float Tc,Tf;

    // Entrada
    //Não há   

    // Processamento e Saída    

    for ( Tf = 40; Tf <= 75; Tf++)
    {
        Tc = (Tf-32) * 5 / 9;
        printf("Temperatura em Fahrenheit: %.1f / Temperatura em Celsius: %.1f.\n", Tf,Tc);
    }
    

}