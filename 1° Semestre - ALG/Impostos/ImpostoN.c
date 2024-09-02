#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    float imposto;

    printf("Digite o seu salário bruto: ");
    scanf("%f", &salario);

    if (salario <= 2640)
    {
        printf("Seu salário líquido é: ""%.2f", salario);
    }
    else if (salario >= 2640.01 && salario <= 4230)
    {
        float taxaimposto = 7.5 / 100;
        float imposto = salario * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: ""%.2f", calculo);
    }
    else if (salario >= 4230.01 && salario <= 6000)
    {
        float taxaimposto = 0.15;
        float imposto = salario * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: ""%.2f", calculo);
    }
    else if (salario >= 6000.01 && salario <= 8700)
    {
        float taxaimposto = 0.22;
        float imposto = salario * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: ""%.2f", calculo);
    }
    else if (salario >= 8700.01)
    {
        float taxaimposto = 0.27;
        float imposto = salario * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: ""%.2f", calculo);
    }
    else
        printf("Entrada inválida");
    return 0;
}