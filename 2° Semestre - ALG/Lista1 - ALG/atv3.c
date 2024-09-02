/*Faça uma função que receba por parâmetro o raio de uma esfera e calcula o seu
volume (v = 4*pi*r³/3).*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int func(float x);

int main()
{
    float d;
    printf("Insira o valor do raio: ");
    scanf("%f", &d);
    float calc = func(d);
    printf("O volume vai ser: %.2f", calc);
}

int func(float x)
{
    float base = x;
    float expoente = 3;
    float result = pow(base, expoente);
    float v = 4 * 3.14 * result / 3;
    return v;
}