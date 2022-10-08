
/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da difereça do primeiro número pelo segundo e O módulo
do primeiro número. (0,1)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

	setlocale(LC_ALL, "portuguese");

	// variáveis
	int num1, num2, soma, eq6;
	float eq2, eq3, eq4, eq5;

	// entrada

	printf("Informe dois números para que os calculos sejam feitos:");
	scanf("%d %d", &num1, &num2);

	printf("O primeiro número é: %d, e o segundo é: %d\n", num1, num2);

	// processamento
	// 1) A soma dos números:
	soma = num1 + num2;
	printf("O valor da soma dos dois números é: %d\n", soma);

	// 2) O produto do primeiro número pelo quadrado do segundo:
	eq2 = num1 * (num2 * num2);
	printf("O produto do primeiro número pelo quadrado do segundo é: %.1f\n", eq2);

	// 3) O quadrado do primeiro número
	eq3 = pow(num1, 2);
	printf("O quadrado do primeiro número é: %.1f\n", eq3);

	// 4) A raiz quadrada da soma dos quadrados
	eq4 = sqrt(pow(num1, 2) + pow(num2, 2));
	printf("A raiz quadrada da soma dos quadrados é: %.1f\n", eq4);

	// 5) O seno da diferença do primeiro número pelo segundo
	eq5 = sin(num1 - num2);
	printf("O seno da diferença do primeiro número pelo segundo: %.1f\n", eq5);

	// 6) O módulo do primeiro número
	eq6 = abs(num1);
	printf("O módulo do primeiro número: %d", eq6);

	// Saida
	// Não há.
}
