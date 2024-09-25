/*Faça uma função que receba por parâmetro um valor inteiro e positivo e retorne o
valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.*/
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
    printf("Insira um número: ");
    scanf("%d", &d);
    int calc = elprimo(d);
    printf("É número primo: %u\n", calc);
}