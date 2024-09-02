#include <stdio.h>
#include <locale.h>

int main()
{
    float valores[10];
    int e = 0;
    int d = 9;
    int i;
    float dado;
    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &dado);
        if (dado >= 0)
        {
            valores[d] = dado;
            d--;
        }
        else
        {
            valores[e] = dado;
            e++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", valores[i]);
    }
    return 0;
}