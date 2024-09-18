/*Escreva uma função que receba, por parâmetro, dois valores X e Z e calcule e retorne
X^z. (sem utilizar funções ou operadores de potencia prontos).*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int calc(int x, int y);
int main()
{
    int x, y;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a base: ");
    scanf("%d", &x);
    printf("Insira seu expoente: ");
    scanf("%d", &y);
    int water = calc(x, y);
    printf("Seu resultado vai ser: %d", water);
}

int calc(int x, int y)
{
    int base = x;
    int expoente = y;
    return pow(base, expoente);
}