#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas[5];
    printf("M�DIA DO ALUNO\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    notas[4] = (notas[3] + notas[2] + notas[1] + notas[0])/4;
    printf("M�dia: %.2f", notas[4]);
}