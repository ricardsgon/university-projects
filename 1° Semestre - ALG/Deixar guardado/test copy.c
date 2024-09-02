#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float v1,v2,total;
    int opcao;
    printf("Escolha qual cálculo será realizado:");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    scanf("%d", &opcao);
    printf("Valor 1: ");
    scanf("%f", &v1);
    printf("Valor 2: ");
    scanf("%f", &v2);
    switch (opcao){
        case 1:
            total = v1 + v2;
            break;
        case 2: 
            total = v1 - v2;
            break;
        case 3: 
            total = v1 * v2;
        case 4: 
            if(v2 != 0){
                total = v1/v2;
            } else{
                printf("Divisão Inválida.");
            }
        } else{
        printf("Opção inválida.");
    }
    printf("Total = %f", total);


    }

