#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1, n2, n3, n4;
    int menor, maior;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &n3);
    printf("Digite o quarto n�mero: ");
    scanf("%d", &n4);

    printf("\n");

    menor = n1;
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4;

    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;

    printf("Menor n�mero: %d\n", menor);
    printf("Maior n�mero: %d\n", maior);

    if (n1 == n2 || n2 == n3 || n3 == n4
    || n1 == n3 || n1 == n4 || n2 == n4) {
        printf("Existem n�meros iguais: ");
        if (n1 == n2) printf("%d\n", n1);
        if (n2 == n3) printf("%d\n", n2);
        if (n3 == n4) printf("%d\n", n3);
        if (n1 == n3) printf("%d\n", n1);
        if (n1 == n4) printf("%d\n", n1);
        if (n2 == n4) printf("%d\n", n2);
    } else {
        printf("N�o existem n�meros iguais.\n");
    }

    return 0;
}