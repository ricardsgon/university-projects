/*Crie uma função que calcula as áreas de circuferência, quadrado, retângulo e triângulo*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdarg.h>
#define pi 3.14159

float calcArea(int tipofig, ...);
void printVal(int tipofig);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tipofig;
    do
    {
        printf("CALCULADORA DE ÁREAS\n1 - Circuferência\n2 - Área Quadrado\n3 - Área Retângulo\n4 - Área Triângulo\n5 - Área Trapezio\n6 - Sair\n");
        printf("--> ");
        scanf("%d", &tipofig);
        getchar();
        printVal(tipofig);
    } while (tipofig != 6);
}
float calcArea(int tipofig, ...)
{
    va_list list;
    va_start(list, tipofig);

    switch (tipofig)
    {

    case 1:
        double radius = va_arg(list, double);
        return pi * radius * radius;
        break;
    case 2:
        double lado = va_arg(list, double);
        return lado * lado;
        break;
    case 3:
        double base1 = va_arg(list, double);
        double altura1 = va_arg(list, double);
        return base1 * altura1;
        break;
    case 4:
        double base2 = va_arg(list, double);
        double altura2 = va_arg(list, double);
        return (base2 * altura2) / 2;
        break;
    case 5:
        double base_menor = va_arg(list, double);
        double base_maior = va_arg(list, double);
        double altura3 = va_arg(list, double);
        return (base_menor + base_maior) * altura3 / 2;
        break;
    }
}

void printVal(int tipofig)
{
    double radius, altura, base, lado, base2;
    switch (tipofig)
    {
    case 1:
        printf("Insira o raio do círculo: ");
        scanf("%lf", &radius);
        printf("Resultado: %lf\n\n", calcArea(tipofig, radius));
        break;
    case 2:
        printf("Insira o valor do lado: ");
        scanf("%lf", &lado);
        printf("Resultado: %lf\n\n", calcArea(tipofig, lado));
        break;
    case 3:
        printf("Insira o valor da altura: ");
        scanf("%lf", &altura);
        printf("Insira o valor da base: ");
        scanf("%lf", &base);
        printf("Resultado: %lf\n\n", calcArea(tipofig, base, altura));
        break;
    case 4:
        printf("Insira o valor da altura: ");
        scanf("%lf", &altura);
        printf("Insira o valor da base: ");
        scanf("%lf", &base);
        printf("Resultado: %lf\n\n", calcArea(tipofig, base, altura));
        break;
    case 5:
        printf("Insira o valor da altura: ");
        scanf("%lf", &altura);
        printf("Insira o valor da base menor: ");
        scanf("%lf", &base);
        printf("Insira o valor da base maior: ");
        scanf("%lf", &base2);
        printf("Resultado: %lf\n\n", calcArea(tipofig, base, base2, altura));
    }
}