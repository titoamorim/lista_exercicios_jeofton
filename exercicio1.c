
/*1) Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do
primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada
da soma dos quadrados, o seno da difere�a do primeiro n�mero pelo segundo e O m�dulo
do primeiro n�mero. (0,1)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{

	setlocale(LC_ALL, "portuguese");

	// vari�veis
	int num1, num2, soma, eq6;
	float eq2, eq3, eq4, eq5;

	// entrada

	printf("Informe dois n�meros para que os calculos sejam feitos:");
	scanf("%d %d", &num1, &num2);

	printf("O primeiro n�mero �: %d, e o segundo �: %d\n", num1, num2);

	// processamento
	// 1) A soma dos n�meros:
	soma = num1 + num2;
	printf("O valor da soma dos dois n�meros �: %d\n", soma);

	// 2) O produto do primeiro n�mero pelo quadrado do segundo:
	eq2 = num1 * (num2 * num2);
	printf("O produto do primeiro n�mero pelo quadrado do segundo �: %.1f\n", eq2);

	// 3) O quadrado do primeiro n�mero
	eq3 = pow(num1, 2);
	printf("O quadrado do primeiro n�mero �: %.1f\n", eq3);

	// 4) A raiz quadrada da soma dos quadrados
	eq4 = sqrt(pow(num1, 2) + pow(num2, 2));
	printf("A raiz quadrada da soma dos quadrados �: %.1f\n", eq4);

	// 5) O seno da diferen�a do primeiro n�mero pelo segundo
	eq5 = sin(num1 - num2);
	printf("O seno da diferen�a do primeiro n�mero pelo segundo: %.1f\n", eq5);

	// 6) O m�dulo do primeiro n�mero
	eq6 = abs(num1);
	printf("O m�dulo do primeiro n�mero: %d", eq6);

	// Saida
	// N�o h�.
}
