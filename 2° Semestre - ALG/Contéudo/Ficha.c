#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAX_PERFIL 100

typedef struct dadops
{
    char nome[50];
    char cpf[12];
    int estadocivil;
    char formacao[50];
} DadoPS;

void AddPerfil(DadoPS Perfil[], int *contador);
void MostrarPerfils(DadoPS Perfil[], int contador);
void MostrarPerfil(DadoPS Perfil[]);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int menu;
    int contador = 0;
    DadoPS Perfil[MAX_PERFIL];
    do
    {
        printf("\n\n-- SISTEMA DE FICHAS --\n\n1 - Criar Perfil\n2 - Ver Perfil\n3 - Listar todos perfils\n4 - Remover Lista\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        printf("\n");
        getchar();
        switch (menu)
        {
        case 1:
            AddPerfil(Perfil, &contador);
            break;
        case 2:
            MostrarPerfil(Perfil);
            break;
        case 3:
            MostrarPerfils(Perfil, contador);
            break;
        case 4:
            RemoverLista(Perfil, &contador);
            break;
        }
    } while (menu != 5);
}

void AddPerfil(DadoPS Perfil[], int *contador)
{
    if (*contador < MAX_PERFIL)
    {
        printf("Insira seu nome: ");
        fgets(Perfil[*contador].nome, sizeof(Perfil[*contador].nome), stdin);
        printf("Insira seu CPF: ");
        scanf("%s", &Perfil[*contador].cpf);
        getchar();
        printf("Qual é seu estado civil(1 - Solteiro(a), 2 - Casado(a), 3 - Divorciado(a), 4 - Viúvo(a)): ");
        scanf("%d", &Perfil[*contador].estadocivil);
        getchar();
        printf("Insira sua formação: ");
        fgets(Perfil[*contador].formacao, sizeof(Perfil[*contador].nome), stdin);
    }
    else
    {
        printf("Limite de fichas atingido.");
    }
    (*contador)++;
}
void MostrarPerfil(DadoPS Perfil[])
{
    int ID;
    printf("Digite o ID do perfil que quer exibir: ");
    scanf("%d", &ID);
    printf("-- FICHA (ID: %d) -- \n\n", ID);
    printf("Nome: %s", Perfil[ID].nome);
    printf("CPF: %s\n", Perfil[ID].cpf);
    printf("Formação: %s", Perfil[ID].formacao);
    if (Perfil[ID].estadocivil == 1)
    {
        printf("Estado Civil: Solteiro(a)\n");
    }
    else if (Perfil[ID].estadocivil == 2)
    {
        printf("Estado Civil: Casado(a)\n");
    }
    else if (Perfil[ID].estadocivil == 3)
    {
        printf("Estado Civil: Divorciado(a)\n");
    }
    else if (Perfil[ID].estadocivil == 4)
    {
        printf("Estado Civil: Viúvo(a)\n");
    }
    printf("\n");
}
void MostrarPerfils(DadoPS Perfil[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhuma ficha no sistema.");
    }
    for (int i = 0; i < contador; i++)
    {
        printf("-- FICHA (ID: %d) -- \n\n", i);
        printf("Nome: %s", Perfil[i].nome);
        printf("CPF: %s\n", Perfil[i].cpf);
        printf("Formação: %s", Perfil[i].formacao);
        if (Perfil[i].estadocivil == 1)
        {
            printf("Estado Civil: Solteiro(a)\n");
        }
        else if (Perfil[i].estadocivil == 2)
        {
            printf("Estado Civil: Casado(a)\n");
        }
        else if (Perfil[i].estadocivil == 3)
        {
            printf("Estado Civil: Divorciado(a)\n");
        }
        else if (Perfil[i].estadocivil == 4)
        {
            printf("Estado Civil: Viúvo(a)\n");
        }
        printf("\n");
    }
}
void RemoverLista(DadoPS Perfil[], int *contador)
{
    int ID;
    printf("Insira o ID da ficha que vai ser removida: ");
    scanf("%d", &ID);
    for (int i = 0; i < *contador; i++)
    {
        if (ID <= *contador)
        {
            for (int j = i; j < *contador - 1; j++)
            {
                Perfil[j] = Perfil[j + 1];
            }
        }
    }
}