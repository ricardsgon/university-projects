#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	float comprimento;
	float altura;

	printf("Digite o valor do comprimento do retângulo: ");
	scanf("%f", &comprimento);
	printf("Digite o valor da altura do retângulo: ");
	scanf("%f", &altura);
	float calculo = altura * comprimento;
	printf("O perimetro do quadrado é: ""%.2f", calculo);

	return 0;
}