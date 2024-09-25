#include <stdio.h>
#include <locale.h>

float Associacao(float resistor[], char tipo, int x);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, z;
    printf("Insira a quantidade de resistores em série: ");
    scanf("%d", &x);
    float resistorS[x];
    for (int i = 0; i < x; i++)
    {
        printf("Resistor %d: ", i + 1);
        scanf("%f", &resistorS[i]);
    }
    printf("Insira a quantidade de resistores em paralelo: ");
    scanf("%d", &z);
    float resistorP[z];
    for (int i = 0; i < z; i++)
    {
        printf("Resistor %d: ", i + 1);
        scanf("%f", &resistorP[i]);
    }
    float reqS = Associacao(resistorS, 'S', x);
    float reqP = Associacao(resistorP, 'P', z);
    printf("Resultado Série: %.2f Ohms\n", reqS);
    printf("Resultado Paralelo: %.2f Ohms\n", reqP);
    printf("Resultado Total: %.2f Ohms\n", reqP + reqS);
}
float Associacao(float resistor[], char tipo, int x)
{

    float sum = 0;
    if (tipo == 's' || tipo == 'S')
    {
        for (int i = 0; i < x; i++)
        {
            sum += resistor[i];
        }
    }
    else if (tipo == 'p' || tipo == 'P')
    {
        for (int i = 0; i < x; i++)
        {
            sum += 1 / resistor[i];
        }
        sum = 1 / sum;
    }
    return sum;
}