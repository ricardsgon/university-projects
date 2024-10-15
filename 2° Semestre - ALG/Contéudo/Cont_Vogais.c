/*Contar a quantidade de vogais maisculas e minusculas.*/
#include <stdio.h>
#include <locale.h>

#define MAX_VG 100

void vogals(char vogal[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char frase[MAX_VG];
    printf("Insira uma frase: ");
    fgets(frase, MAX_VG, stdin);
    vogals(frase);
    return 0;
}

void vogals(char vogal[]){
    int contadorMaior = 0;
    int contadorMenor = 0;
    for(int i = 0; i<MAX_VG; i++){
        if(vogal[i] == 'a'||vogal[i] == 'e'||vogal[i] == 'i'||vogal[i] == 'o'||vogal[i] == 'u'){
            contadorMenor++;
        }else if(vogal[i] == 'A'||vogal[i] == 'E'||vogal[i] == 'I'||vogal[i] == 'O'||vogal[i] == 'U'){
            contadorMaior++;
        }
    }
   printf("Quantidade de Vogais Maiúsculas: %d\n", contadorMaior);
   printf("Quantidade de Vogais Minúsculas: %d\n", contadorMenor); 

}