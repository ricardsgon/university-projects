/*Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6
= 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.*/
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
    printf("O valor é perfeito: %d\n", water);
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
