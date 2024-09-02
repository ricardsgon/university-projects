/*Escreva uma função que leia um número inteiro, positivo N, calcule e mostre o
maior quadrado menor ou igual a N. Por exemplo, se N for maior ou igual a 38, o menor
quadrado é 36 (quadrado de 6).
*/

#include <stdio.h>
#include <locale.h>

int maioroumenor(int n);
int num(int n);
int main(){
    int c;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite um número: ");
    scanf("%d", &c);
    int final = maioroumenor(c);
    int num1 =  num(c);
    printf("O maior quadrado que é maior ou menor que %d é: %d (quadrado de %d)", c, final, num1);
    
    return 0;
}

int maioroumenor(int n){
    int i = 1;
    while (i * i <= n){
        i++;
    }
    return (i-1) * (i-1);

}
int num(int n){
    int i = 1;
    while (i * i <= n){
        i++;
    }
    return i-1;

}