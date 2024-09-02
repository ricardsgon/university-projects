#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float v1, v2, total;
    int opcao;
    printf("1 - Soma\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    printf("Op��o: ");
    scanf("%d", &opcao);
    printf("Valor 1: ");
    scanf("%f", &v1);
    printf("Valor 2: ");
    scanf("%f", &v2);
    switch (opcao)
    {
    case 1:
        total = v1 + v2;
        break;
    case 2:
        total = v1 - v2;
        break;
    case 3:
        total = v1 * v2;
        break;
    case 4:
        if (v2 != 0)
        {
            total = v1 / v2;
        }
        else
        {
            printf("Divis�o Inv�lida.");
            return 1;
        }
        break;
    default:
        printf("Op��o inv�lida.");
        return 1;
    }
    printf("Total = %f", total);
    return 0;
}
