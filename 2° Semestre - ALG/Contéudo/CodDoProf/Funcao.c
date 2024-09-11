#include <stdio.h>
int par(int x)
{
    return ((x % 2) == 0);
}
void soma(int x)
{
    x = x + x * 2;
}
int main()
{
    int z;
    scanf("%d", &z);
    printf("%d", par(z));
    soma(z);
    printf("%d", z);
    return 0;
}