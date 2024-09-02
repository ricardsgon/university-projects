#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int prods[20];
    int i, az=0, ve=0, am=0, v;
    
    for(i = 0; i < 20; i++) {
        printf("Cor: ");
        scanf("%d", &v);
        prods[i] = v;
        switch (v) {
            case 1:
                az++;
                break;
            case 2:
                am++;
                break;
            case 3:
                ve++;
                break;
        }
    }   
    printf("Azul: %d\n", az);
    printf("Amarelo: %d\n", am);
    printf("Vermelho: %d\n", ve);

    return 0;
}
