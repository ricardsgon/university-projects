/*Escreva uma função que receba, por parâmetro, dois valores X e Z e calcule e retorne
X^z. (sem utilizar funções ou operadores de potencia prontos).*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int calc(int x, int y);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("Insira a base: ");
    scanf("%d", &x);
    printf("Insira seu expoente: ");
    scanf("%d", &y);
    printf("Seu resultado vai ser: %d", calc(x, y));
}

int calc(int x, int y)
{
    int base = x;
    int expoente = y;
    return pow(base, expoente);
}