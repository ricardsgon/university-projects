#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Acento
    float valorInicial, taxaCorrecao;
    int aumentos = 0, diminuicoes = 0;

    // Solicitação do valor e taxa de correção para o usuário.
    printf("Digite o valor inicial: ");
    scanf("%f", &valorInicial);
    printf("Digite a taxa de correção em porcentagem(Ex: 5% = 0.05): ");
    scanf("%f", &taxaCorrecao);

    // Cálculo dos valores
    float valorAtual = valorInicial;

    // Aumento do valor
    while (valorAtual < 1) {
        valorAtual *= (1 + taxaCorrecao);
        aumentos++;
    }

    valorAtual = valorInicial;

    // Diminuição do valor
    while (valorAtual > 1) {
        valorAtual /= (1 + taxaCorrecao);
        diminuicoes++;
    }

    // Resultados
    printf("O valor será aumentado em: %d\n", aumentos);
    printf("O valor será reduzido em: %d\n", diminuicoes);

    return 0;
}
