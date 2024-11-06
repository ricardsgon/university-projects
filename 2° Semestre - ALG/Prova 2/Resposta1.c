#include <stdio.h>
#include <locale.h>

int CompIgualdadePerc(int vetor1[], int vetor2[], float tamanho);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float tamanho = 10;
    int vetor1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[] = {1, 3, 3, 4, 6, 7, 8, 9, 9,10};
    printf("Percentual de igualdade: %d %%", CompIgualdadePerc(vetor1, vetor2, tamanho));
    return 0;
}
int CompIgualdadePerc(int vetor1[], int vetor2[], float tamanho){
    float iguais = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor1[i]==vetor2[i]){
            iguais++;
        }
    }
    return (iguais/tamanho)*100;
}


