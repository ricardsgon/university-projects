/*Construa uma função, que receba como entrada um número inteiro e retorne como
resposta o número do mês equivalente.*/
#include <stdio.h>
#include <locale.h>

void func(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int c;
    printf("Digite o número do mês: ");
    scanf("%d", &c);
    func(c);
}

void func(int x)
{
    switch (x)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5: 
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    }
}