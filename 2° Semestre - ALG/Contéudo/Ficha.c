#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct dadops
{
    char nome[50];
    char cpf[50];
    char estcivil[20];
} DadoPS;
typedef struct dadopf
{
    char emprego[50];
    float salario;
    char formacao[50];
} DadoPF;
typedef struct dadoPP
{
    char esporte[40];
    char animal[40];
    char jogo[40];
} DadoPP;
typedef struct junto
{
    DadoPS Pessoal;
    DadoPF Profissional;
    DadoPP Preferencia;
} Jun;
Jun ler()
{
    Jun Registro;
    printf("--Informações pessoais--\n");
    printf("Nome: ");
    scanf(" %[^\n]", Registro.Pessoal.nome);
    printf("CPF(num): ");
    scanf(" %[^\n]", Registro.Pessoal.cpf);
    printf("Estado Civil: ");
    scanf(" %[^\n]", Registro.Pessoal.estcivil);
    printf("\n");

    printf("--Informações profissionais--\n");
    printf("Emprego: ");
    scanf(" %[^\n]", Registro.Profissional.emprego);
    printf("Formação: ");
    scanf(" %[^\n]", Registro.Profissional.formacao);
    printf("Salário: ");
    scanf("%f", &Registro.Profissional.salario);
    printf("\n");

    printf("--Preferências--\n");
    printf("Esporte favorito: ");
    scanf(" %[^\n]", Registro.Preferencia.esporte);
    printf("Animal favorito: ");
    scanf(" %[^\n]", Registro.Preferencia.animal);
    printf("Jogo favorito: ");
    scanf(" %[^\n]", Registro.Preferencia.jogo);
    printf("\n");
    
    return Registro;
}
void printar(Jun Registro)
{
    printf("\n -- FICHA PESSOAL --  \n");
    printf("Nome: %s\n", Registro.Pessoal.nome);
    printf("CPF: %s\n", Registro.Pessoal.cpf);
    printf("Estado Civil: %s\n", Registro.Pessoal.estcivil);

    printf("\n -- DADOS PROFISSIONAIS -- \n");
    printf("Emprego: %s\n", Registro.Profissional.emprego);
    printf("Formação: %s\n", Registro.Profissional.formacao);
    printf("Salario: %.1f\n", Registro.Profissional.salario);

    printf("\n -- PREFERÊNCIAS -- \n");
    printf("Esporte favorito: %s\n", Registro.Preferencia.esporte);
    printf("Animal favorito: %s\n", Registro.Preferencia.animal);
    printf("Jogo favorito: %s\n", Registro.Preferencia.jogo);
    printf("\n");

}
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Jun Registro = {0};
    Jun z;
    int menu;
    do
    {

        printf("Avaliador de Perfil\n\n 1 - Criar Perfil\n 2 - Meu Perfil\n 3 - Listar todos perfils\n 4 - Encerrar\n");
        printf("--> ");
        scanf("%d", &menu);
        printf("\n");
        switch (menu)
        {
        case 1:
            z = ler();
            break;
            
        case 2:
            printar(z);
            break;
        case 3:
            
        }

    } while (menu != 4);
}