#include <stdio.h>
#include <locale.h>
//Algoritmo presente em notepad++.
//Versão Codigo do algoritmo.
//Codigo feito para calcular média.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas[4];
    int I;
    float soma = 0.0;
    for(I = 0; I < 4; I++ )
    {
        printf("Nota: ", I + 1);
        scanf("%f", &notas[I]);
        soma += notas[I];
    }
        notas[3] = soma/4;
        printf("Media = ""%.2f", notas[3]);
    return 0;
}