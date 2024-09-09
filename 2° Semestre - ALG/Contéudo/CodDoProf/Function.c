#include <stdio.h>
#include <locale.h>
void swap(float*, float*);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b;
    int x = 3534534534534534534;
    int *z = &x;
    printf("New num = %p", &x);
    printf("New end: %p", *z);

    
}
void swap(float* a, float* b){
    float tempa = *a;
    *a = *b;
    *b = tempa;
}