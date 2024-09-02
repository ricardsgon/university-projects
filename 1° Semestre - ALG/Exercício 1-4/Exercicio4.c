#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Acento
    float valorInicial, taxaCorrecao;
    int aumentos = 0, diminuicoes = 0;

    // Solicita��o do valor e taxa de corre��o para o usu�rio.
    printf("Digite o valor inicial: ");
    scanf("%f", &valorInicial);
    printf("Digite a taxa de corre��o em porcentagem(Ex: 5% = 0.05): ");
    scanf("%f", &taxaCorrecao);

    // C�lculo dos valores
    float valorAtual = valorInicial;

    // Aumento do valor
    while (valorAtual < 1) {
        valorAtual *= (1 + taxaCorrecao);
        aumentos++;
    }

    valorAtual = valorInicial;

    // Diminui��o do valor
    while (valorAtual > 1) {
        valorAtual /= (1 + taxaCorrecao);
        diminuicoes++;
    }

    // Resultados
    printf("O valor ser� aumentado em: %d\n", aumentos);
    printf("O valor ser� reduzido em: %d\n", diminuicoes);

    return 0;
}
