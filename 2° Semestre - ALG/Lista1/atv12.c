/* Fazer uma fun��o que compare 2 n�meros reais e devolva como resposta:
0 ? se os n�meros s�o iguais;
-1 ? se o primeiro n�mero � menor que o segundo n�mero;
1 ? se o se o primeiro n�mero � maior que o segundo n�mero.*/

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