#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    if (age < 16)
    {
        printf("Voto não permitido.");
    }
    else if (age > 17 && age < 71)
    {
        printf("Voto obrigatório");
    }
    else
    {
        printf("Voto Facultativo");
    }
    return 0;
}