/*Contar quantidade de caracteres.*/

#include <stdio.h>
#include <locale.h>

#define MAX_VL 100
int contarChar(char x[], char y);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char c;
    char frase[MAX_VL];

    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Insira o caracter que deseja buscar na frase: ");
    scanf("%c", &c);
    printf("Quantidade: %d", contarChar(frase, c));
}
int contarChar(char x[], char y)
{
    int contador = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (y >= 'a' && y <= 'z')
        {
            if (x[i] == y)
            {
                contador++;
            }
        }
        if (y >= 'A' && y <= 'Z')
        {
            if (x[i] == y)
            {
                contador++;
            }
        }
        else
        {
            if (x[i] == y)
            {
                contador++;
            }
        }
    }
    return contador;
}