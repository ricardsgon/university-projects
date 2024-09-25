/*Construa uma fun��o, que receba como entrada um n�mero inteiro e retorne como
resposta o n�mero do m�s equivalente.*/
#include <stdio.h>
#include <locale.h>

void func(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int c;
    do{
    printf("Digite o n�mero do m�s: ");
    scanf("%d", &c);
    if (c >= 1 && c <= 12)
    {
        func(c);    
    }
    else
    {
        printf("N�mero inv�lido. Tente novamente.\n\n");
    }
    }while(c <= 0 || c > 12);
}

void func(int x)
{
    const char *meses[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("%s\n", meses[x - 1]);
}