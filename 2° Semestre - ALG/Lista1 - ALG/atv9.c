/*Escreva uma função que receba, por parâmetro, dois valores X e Z e calcule e retorne
X^Z. (sem utilizar funções ou operadores de potencia prontos).*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int calc(int x, int y);

int main(){
    int c, d;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite sua base: ");
    scanf("%d", &c);
    printf("Digite seu expoente: ");
    scanf("%d", &d);
    int water = calc(c, d);
    printf("Seu resultado vai ser: %d", water);

}

int calc(int x, int y){
    int base = x;
    int expoente = y;
    return pow(base, expoente); 
}