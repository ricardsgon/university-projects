/*Construa uma fun��o para calcular as ra�zes de equa��es do segundo grau, a resposta
da fun��o deve ser em n�mero complexo.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <complex.h>

void calc(float x, float y, float z);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, c;
    printf("Insira os valores para a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Raiz incompleta: %.0fx� + %.0fx - (%.0f)\n", a, b, c);
    calc(a, b, c);
    
}
void calc(float x, float y, float z)
{
    float delta = y * y - 4 * x * z;
    if (x == 0)
    {
        printf("Resultado inv�lido.\n");
    }
    float raiz1 = (-y + sqrt(delta))/(2*x);
    float raiz2 = (-y - sqrt(delta))/(2*x);
    printf("Raiz 1(Delta +): %.1f\nRaiz 2(Delta -): %.1f\n", raiz1, raiz2);
    
}
