#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saldo = 0.0, valor;
    int x, y;
    y = 1;
    x = 0;
    while (y <= 20)
    {
        x = x + 5;
        y = y + 1;
    }
    y = 1;
    while (y < 5)
    {
        printf("Digite 4 valores(aperte enter para inserir o próximo valor): ");
        scanf("%f", &valor);
        saldo = saldo + valor;
        y = y + 1;
    }
    printf("%.2f\n", saldo);
    printf("%d\n", x);
    return 0;
}
