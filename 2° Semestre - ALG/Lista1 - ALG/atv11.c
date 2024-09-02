/*Fazer uma função que retorne a soma, a diferença e o produto entre dois números*/

#include <stdio.h>
int soma(int x, int y);
int dife(int x, int y);
int multi(int x, int y);

int main()
{
    int a, b;
    
    printf("Type one number: ");
    scanf("%d", &a);
    printf("Type another number: ");
    scanf("%d", &b);
    int sum = soma(a, b);
    int dif = dife(a, b);
    int mult = multi(a, b);
    printf("The sum is: %d\nThe dif is: %d\nThe mult is: %d\n", sum, dif, mult);
}

int soma(int x, int y)
{
    return x + y;
}
int dife(int x, int y)
{
    return x - y;
}
int multi(int x, int y)
{
    return x * y;
}