/*Escreva uma função que receba 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário
que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é
menor do que a soma do comprimento dos outros dois lados. A função deve identificar o
tipo de triângulo formado observando as seguintes definições:
1 – Para triângulo equilátero: os comprimentos dos 3 lados são iguais.
2 – Para triângulo isósceles: os comprimentos de 2 lados são iguais.
3 – Para triângulo escaleno: os comprimentos dos 3 lados são diferentes.
0 – Para não triângulo*/

#include <stdio.h>
#include <locale.h>
void trian(int x, int y, int z);
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a, b, c;
    printf("Insira 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    trian(a, b, c);
    return 0;
}

void trian(int x, int y, int z)
{
    if (x + y < z || z + y < x || x + z < y || y + z < x)
    {
        printf("0 - Não é Triângulo.");
    }
    if (x == y && x == z && y == z)
    {
        printf("1 - Triângulo equilátero");
    }
    if(x == y && x != z||y == z && y != x|| x == z && x != y){
        printf("2 - Triângulo isósceles");
    }
    if(x != y && x != z|| y != z && y != x|| z != y && z != x){
        printf("3 - Triângulo escaleno");
    }
}