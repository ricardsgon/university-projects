/*Construa funções que realizam a comparação entre dois structs.*/
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
                    printf("As funções são iguais.");
                }
            }
        }
        else
        {
            printf("As funções não são iguais.");
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
                printf("Valor dividindo não pode ser 0.");
                break;
            }
            value += Value[i].p * Value[i].v;
            return value;
        }
    }
}