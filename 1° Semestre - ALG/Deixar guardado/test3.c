#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float total = 0.0;
    float valor = 0.0;
    int contador = 1;

    while (contador < 5)
    {
        printf("Valor: R$ ");
        scanf("%f", &valor);

        if (valor < 0.0)
        {
            printf("O valor não pode ser negativo.\n");
            continue;
        }

        total = total + valor;
        contador++;
    }

    printf("Total R$: %.2f\n", total);
    return 0;
}
