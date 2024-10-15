#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char ch;
    float v;
    int p;
} Taaa;

void compararStruct(Taaa lista[], int quan, int id1, int id2);
float operacaoValores(Taaa lista[], char tipo, int quan, int ID);
void organizarStructs(Taaa lista[], int quan, char ordem);
int compararCrescente(const void *a, const void *b);
int compararDecrescente(const void *a, const void *b);

int main()
{
    int size, menu, i, ID, id1, id2;
    char oper, ordem;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("Insira a quantidade de structs: ");
        scanf("%d", &size);
        Taaa List[size];

        do
        {
            printf("\nCOMPARADOR DE STRUCTS\n\n1 - Adicionar\n2 - Listar\n3 - Comparar\n4 - Realizar operações com os valores dentro do struct\n5 - Organizar\n6 - Trocar quantidade de structs\n7 - Sair\n");
            printf("--> ");
            scanf("%d", &menu);
            getchar();

            switch (menu)
            {
            case 1:
                for (i = 0; i < size; i++)
                {
                    printf("Insira um caractere: ");
                    scanf(" %c", &List[i].ch);
                    printf("Insira um número(INT): ");
                    scanf("%d", &List[i].p);
                    printf("Insira um número(FLOAT): ");
                    scanf("%f", &List[i].v);
                    printf("\n");
                }
                break;
            case 2:
                for (i = 0; i < size; i++)
                {
                    printf("STRUCT ID: %d\n", i);
                    printf("Caractere: %c\n", List[i].ch);
                    printf("Número(INT): %d\n", List[i].p);
                    printf("Número(FLOAT): %.2f\n\n", List[i].v);
                }
                break;
            case 3:
                printf("Insira o ID do primeiro struct para comparar: ");
                scanf("%d", &id1);
                printf("Insira o ID do segundo struct para comparar: ");
                scanf("%d", &id2);
                compararStruct(List, size, id1, id2);
                break;
            case 4:
                printf("Insira o ID do Struct que deseja calcular: ");
                scanf("%d", &ID);
                printf("Insira qual operação será realizada(+, - , *, /): ");
                scanf(" %c", &oper);
                printf("Operação sobre o ID %d: %.2f\n", ID, operacaoValores(List, oper, size, ID));
                break;
            case 5:
                printf("Escolha a ordem (c: crescente, d: decrescente): ");
                scanf(" %c", &ordem);
                organizarStructs(List, size, ordem);
                printf("Structs organizados com sucesso!\n");
                break;
            case 6:
                printf("Insira a quantidade de structs: ");
                scanf("%d", &size);
                break;
            case 7:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
            }
        } while (menu != 7);
    } while (size < 1);

    return 0;
}

void compararStruct(Taaa lista[], int quan, int id1, int id2)
{
    if (id1 < 0 || id1 >= quan || id2 < 0 || id2 >= quan)
    {
        printf("Um ou ambos os IDs são inválidos.\n");
        return;
    }

    if (lista[id1].ch == lista[id2].ch && lista[id1].v == lista[id2].v && lista[id1].p == lista[id2].p)
    {
        printf("Structs %d e %d são iguais.\n", id1, id2);
    }
    else
    {
        printf("Structs %d e %d são diferentes.\n", id1, id2);
    }
}

float operacaoValores(Taaa lista[], char tipo, int quan, int ID)
{
    if (ID < 0 || ID >= quan)
    {
        printf("ID inválido.\n");
        return -1;
    }

    float resultado = 0;
    switch (tipo)
    {
    case '+':
        resultado = lista[ID].p + lista[ID].v;
        break;
    case '-':
        resultado = lista[ID].p - lista[ID].v;
        break;
    case '*':
        resultado = lista[ID].p * lista[ID].v;
        break;
    case '/':
        if (lista[ID].v == 0)
        {
            printf("Valor divisor não pode ser 0.\n");
            return -1;
        }
        resultado = lista[ID].p / lista[ID].v;
        break;
    default:
        printf("Operação inválida.\n");
        return -1;
    }

    return resultado;
}

void organizarStructs(Taaa lista[], int quan, char ordem)
{
    if (ordem == 'c')
    {
        qsort(lista, quan, sizeof(Taaa), compararCrescente);
    }
    else if (ordem == 'd')
    {
        qsort(lista, quan, sizeof(Taaa), compararDecrescente);
    }
    else
    {
        printf("Ordem inválida.\n");
    }
}

int compararCrescente(const void *a, const void *b)
{
    Taaa *structA = (Taaa *)a;
    Taaa *structB = (Taaa *)b;

    if (structA->p == structB->p)
    {
        return (structA->v > structB->v) - (structA->v < structB->v);
    }
    return structA->p - structB->p;
}

int compararDecrescente(const void *a, const void *b)
{
    Taaa *structA = (Taaa *)a;
    Taaa *structB = (Taaa *)b;

    if (structA->p == structB->p)
    {
        return (structB->v > structA->v) - (structB->v < structA->v);
    }
    return structB->p - structA->p;
}
