/*Construa uma função, que receba como entrada um número inteiro e retorne como
resposta o número do mês equivalente.*/
#include <stdio.h>
#include <locale.h>

void func(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int c;
    do{
    printf("Digite o número do mês: ");
    scanf("%d", &c);
    if (c >= 1 && c <= 12)
    {
        func(c);    
    }
    else
    {
        printf("Número inválido. Tente novamente.\n\n");
    }
    }while(c <= 0 || c > 12);
}

void func(int x)
{
    const char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("%s\n", meses[x - 1]);
}