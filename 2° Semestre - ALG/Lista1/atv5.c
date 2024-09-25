/*Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito
quando ele � igual a soma dos seus divisores excetuando ele pr�prio. (Ex: 6 � perfeito, 6
= 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um valor booleano.*/
#include <stdio.h>
#include <locale.h>

int IsPerfect(int x);

int main()
{
    int c;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Insira um valor: ");
    scanf("%d", &c);
    int water = IsPerfect(c);
    printf("O valor � perfeito: %d\n", water);
}

int IsPerfect(int x)
{
    int calc;
    for (int i = 1; i < x; i++)
    {
        
        if (x % i == 0)
        {
            calc += i;
        }
    }
    
    return calc == x;
}
