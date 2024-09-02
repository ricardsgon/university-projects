/* Fazer uma função que compare 2 números reais e devolva como resposta:
0 ? se os números são iguais;
-1 ? se o primeiro número é menor que o segundo número;
1 ? se o se o primeiro número é maior que o segundo número.*/

#include <stdio.h>
void fun(float x, float y){
    if(x == y){
        printf("0");
    }if(x < y){
        printf("-1");
    }if(x > y){
        printf("1");
    }
}

int main(){
    float x, y;
    scanf("%f %f", &x, &y);
    fun(x, y);
    return 0;
}