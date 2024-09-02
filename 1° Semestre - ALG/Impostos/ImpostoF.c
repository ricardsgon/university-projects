#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario;
    printf("Digite o seu salário bruto: ");
    scanf("%f", &salario);

    if (salario <= 2112) {
        printf("Seu salário líquido é: %.2f\n", salario);
    } else if (salario >= 2112.01 && salario <= 2826.65) {
        float taxaimposto = 0.075;
        float inss = 158.40;
        float imposto = (salario - inss) * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: %.2f\n", calculo);
    } else if (salario >= 2826.66 && salario <= 3751.05) {
        float taxaimposto = 0.15;
        float inss = 370.40;
        float imposto = (salario - inss) * taxaimposto;
        float calculo = salario - imposto; 
        printf("Seu salário líquido é: %.2f\n", calculo);
    } else if (salario >= 3751.06 && salario <= 4664.68) {
        float taxaimposto = 0.225;
        float inss = 651.73;
        float imposto = (salario - inss) * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: %.2f\n", calculo);
    } else if (salario >= 4664.69) {
        float taxaimposto = 0.275;
        float inss = 884.96;
        float imposto = (salario - inss) * taxaimposto;
        float calculo = salario - imposto;
        printf("Seu salário líquido é: %.2f\n", calculo);
    } else {
        printf("Entrada inválida!\n");
    }
    
    return 0;
}