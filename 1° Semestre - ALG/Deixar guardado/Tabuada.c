#include <stdio.h>
#include <locale.h>

int main(){
    float nro;
    int i = 1;
    printf("Tabuada: ");
    scanf("%f", &nro);
    while(i < 15){
        printf("%.2f x %d = %.2f\n", nro, i,nro * i);
        i++;
    }
    return 0;
}