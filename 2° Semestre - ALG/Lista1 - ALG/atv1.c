/*Construa uma fun��o para calcular as ra�zes de equa��es do segundo grau, a resposta
da fun��o deve ser em n�mero complexo.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <complex.h>

void calc(float x, float y, float z);

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, c;
    printf("Insira os valores para a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("\n");
    if(a == 0){
        printf("N�mero para 'A' incorreto.");
    }else{
    calc(a, b, c);
    }
}

void calc(float x, float y, float z){
    float delta = y * y - 4 * x * z;
    float sqrtdelta = sqrt(delta);
    float xpositive = (-y + sqrtdelta)/(2*x);
    float xnegative = (-y - (sqrtdelta))/(2*x);
    printf("A raiz positiva vai ser: %.1f\nA raiz negativa vai ser: %.1f\n", xpositive, xnegative);
}