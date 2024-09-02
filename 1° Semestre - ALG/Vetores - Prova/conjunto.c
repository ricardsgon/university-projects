#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese" );
    int conj1[5]= {7,25,-2,80,-31};
    int conj2[5]= {81,12,7,-90,16};
    int conj3[5];
    int i;

//Resultado final. (conj3)
    printf("Os valores finais da soma vai ser: \n");
    for(i = 0; i<5; i++){
        conj3[i] = conj1[i] + conj2[i];
        printf("(%d)", conj3[i]);
    }
    return 0;
}