/*Fa�a uma fun��o que receba por par�metro um valor inteiro e positivo e retorne o
valor l�gico Verdadeiro caso o valor seja primo e Falso em caso contr�rio.*/
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
int elprimo(int x)
{
    bool c;
    int notprime;
    for (int i = 2; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            notprime = 1;
            break;
        }
    }
    if (notprime == 1)
    {
        c = false;
    }
    else
    {
        c = true;
    }
    return c;
}
int main()
{
    int d;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Insira um n�mero: ");
    scanf("%d", &d);
    int calc = elprimo(d);
    printf("� n�mero primo: %u\n", calc);
}