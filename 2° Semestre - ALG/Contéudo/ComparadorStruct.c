/*Construa fun��es que realizam a compara��o entre dois structs.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char ch;
    int v;
    float p;
} Taaa;

void compararStruct(Taaa[], int quan);
void ordenarLista(Taaa[]);
float operacaoValores(Taaa[], char tipo, int quan);

int main()
{
    setlocale(LC_ALL, "Portuguese");
}

void compararStruct(Taaa[], int quan)
{
    Taaa Value[quan];
    for (int i = 0; i < quan; i++)
    {
        if (strcmp(Value[i].ch, Value[i + 1].ch) == 0)
        {
            if (Value[i].p == Value[i + 1].p)
            {
                if (Value[i].v == Value[i + 1].v)
                {
                    printf("As fun��es s�o iguais.");
                }
            }
        }
        else
        {
            printf("As fun��es n�o s�o iguais.");
            break;
        }
    }
}
float operacaoValores(Taaa[], char tipo, int quan)
{
    Taaa Value[quan];
    int i, value = 0;
    switch (tipo)
    {
    case '+':
        for (i = 0; i < quan; i++)
        {
            value += Value[i].p + Value[i].v;
            return value;
        }
    case '-':
        for (i = 0; i < quan; i++)
        {
            value += Value[i].p - Value[i].v;
            return value;
        }
    case '*':
        for (i = 0; i < quan; i++)
        {
            value += Value[i].p * Value[i].v;
            return value;
        }
    case '/':
        for (i = 0; i < quan; i++)
        {
            if (Value[i].v == 0)
            {
                printf("Valor dividindo n�o pode ser 0.");
                break;
            }
            value += Value[i].p * Value[i].v;
            return value;
        }
    }
}