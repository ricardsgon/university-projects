/*Faça uma função que receba a média final de um aluno por parâmetro e retorna o seu
conceito, conforme a tabela abaixo:
Nota Conceito
De 0.0 a 4.9 - D
de 5,0 a 6,9 - C
de 7,0 a 8,9 - B
De 9.0 a 10.0- A*/
#include <stdio.h>
#include <locale.h>

int calc(float x);
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a;
    printf("Insira a média final do aluno: ");
    scanf("%f", &a);
    int water = calc(a);
    printf("O conceito do aluno foi: %c", water);

}

int calc(float x){
    char conc;
    if(0.0 < x && x <= 4.9){
        conc = 'D';
    }else if(5.0 <= x && x <= 6.9){
        conc = 'C';
    }else if(7.0 <= x && x <= 8.9){
        conc = 'B';
    }else{
        conc = 'A';
    }
    return conc;
}