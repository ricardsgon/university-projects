#include <stdio.h>
#include <locale.h>
typedef struct
{
    int matricula;
    char nome[100];
    float salario;
} Data;
typedef struct
{
    int ano;
    int dia;
    int mes;
    Data Dados;
} Conjunto;

void trocavalores(Conjunto *p1, Conjunto *p2);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    Conjunto dados1 = {2000, 10, 6, {1500, "Ricardo", 2542.24}};
    Conjunto dados2 = {1999, 24, 10, {1200, "Carlos", 2000}};

    printf("ANTES DA TROCA\n\n");
    printf("Matricula: %d\nNome: %s\nSalário: %.2f\nData de aniversário: %d/%d/%d\n\n", dados1.Dados.matricula, dados1.Dados.nome, dados1.Dados.salario, dados1.dia, dados1.mes, dados1.ano);
    trocavalores(&dados1, &dados2);
    printf("DEPOIS DA TROCA\n\n");
    printf("Matricula: %d\nNome: %s\nSalário: %.2f\nData de aniversário: %d/%d/%d\n\n", dados1.Dados.matricula, dados1.Dados.nome, dados1.Dados.salario, dados1.dia, dados1.mes, dados1.ano);
}

void trocavalores(Conjunto *p1, Conjunto *p2)
{
    Conjunto temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
