/*Fa�a uma fun��o que receba por par�metro o raio de uma esfera e calcula o seu
volume (v = 4*pi*r�/3).*/

#include <stdio.h>
#include <locale.h>

float func(float x);

int main()
{
    float d;
    printf("Insira o valor do raio: ");
    scanf("%f", &d);
    printf("O volume vai ser: %.2f\n", func(d));
}

float func(float x)
{
    return 4 * 3.14159 * (x * x * x) / 3;
}