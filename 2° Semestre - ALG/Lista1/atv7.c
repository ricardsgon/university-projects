/*Escreva uma fun��o que receba 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um tri�ngulo e, neste caso, retornar
qual o tipo de tri�ngulo formado. Para que X, Y e Z formem um tri�ngulo � necess�rio
que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo �
menor do que a soma do comprimento dos outros dois lados. A fun��o deve identificar o
tipo de tri�ngulo formado observando as seguintes defini��es:
1 � Para tri�ngulo equil�tero: os comprimentos dos 3 lados s�o iguais.
2 � Para tri�ngulo is�sceles: os comprimentos de 2 lados s�o iguais.
3 � Para tri�ngulo escaleno: os comprimentos dos 3 lados s�o diferentes.
0 � Para n�o tri�ngulo*/

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
        printf("0 - N�o � Tri�ngulo.");
    }
    if (x == y && x == z && y == z)
    {
        printf("1 - Tri�ngulo equil�tero");
    }
    if(x == y && x != z||y == z && y != x|| x == z && x != y){
        printf("2 - Tri�ngulo is�sceles");
    }
    if(x != y && x != z|| y != z && y != x|| z != y && z != x){
        printf("3 - Tri�ngulo escaleno");
    }
}