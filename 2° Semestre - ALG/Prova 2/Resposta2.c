#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int RandomNum(int num);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Insira o número máximo de possibilidades: ");
    scanf("%d", &num);
    printf("Resultado: %d", RandomNum(num));
    return 0;
}

int RandomNum(int num)
{
    srand(time(NULL));
    int value = rand() % (num + 1);
    return value;
}