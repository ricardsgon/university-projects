#include <stdio.h>
#include <locale.h>
//Algoritmo presente no notepad+.
//Codigo em C do algoritmo mencionado.
int main()
{
    float valores[6];
    int i = 0;
    do
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        i++;
        i = i % 6;
    } while (valores[i - 1] != 0);
    for (i = 0; i < 6; i++)
        printf("%.2f  ", valores[i]);
    return 0;
}