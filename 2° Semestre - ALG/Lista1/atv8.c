/*Fa�a uma fun��o que receba um valor inteiro e positivo e calcule seu fatorial.*/
#include <stdio.h>
#include <locale.h>

int factorial(int x);

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int c;
    printf("Insira um n�mero: ");
    scanf("%d", &c);
    printf("Seu fatorial �: %d", factorial(c));
}

int factorial(int x){
    int calc = x;
    for(int i = 1; i < x; i++){
        calc = calc * i;
    }
    return calc;
}
