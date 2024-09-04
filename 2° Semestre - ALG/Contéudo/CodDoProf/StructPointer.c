#include <stdio.h>

typedef struct coordxy {
    int x, y;
} TCoordxy;

int inserirDados(TCoordxy *);

int main() {
    TCoordxy variavel;
    int resposta; // each int ocupies 4 bytes
    resposta = inserirDados(&variavel);
    if(resposta) {
        printf("x1: %d\n, y1 : %d\n", variavel.x, variavel.y);
    } else {
        printf("Erro de armazenamento\n");
    }
    return 0;
}

int inserirDados(TCoordxy * a) {
    int retorno;
    printf("Digite x1, y1: ");
    retorno = scanf("%d, %d", &a->x, &a->y); // -> is used to access the members of a structure using a pointer
    // -> is used to access the members of a structure using a pointer, structured pointer
    return (sizeof(TCoordxy) / 4 == retorno);
}