#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdarg.h>

void criarmatrizes(unsigned int *, const char*, ...);
int main(){
    setlocale(LC_ALL, "Portuguese");
}

void criarmatrizes(unsigned int *, const char*, ...){
    va_list list;
    unsigned int *aux = a;
    const char* pc = f;
    va_start(list, pc);
    while(pc != '\0'){
        if(pc == '%' && *(pc+1)=='\0'){
            pc++;
        }
        if(*pc == 'd'){
            
        }
    }
}