#include <stdio.h>
//cópia arquivo texto
int main(int argc, const char *argv[]) {
    FILE *arquivo_original, *arquivo_copia;
    char caractere;

    // Abre o arquivo original em modo de leitura
    arquivo_original = fopen(argv[1], "r");
    
    // Verifica se o arquivo original foi aberto corretamente
    if (arquivo_original == NULL) {
        printf("Erro ao abrir o arquivo original.\n");
        return 1;
    }
	
    // Abre o arquivo de cópia em modo de escrita
    arquivo_copia = fopen(argv[2], "w");

    // Verifica se o arquivo de cópia foi aberto corretamente
    if (arquivo_copia == NULL) {
        printf("Erro ao criar o arquivo de cópia.\n");
        return 1;
    }

    // Lê cada caractere do arquivo original e escreve no arquivo de cópia
    while ((caractere = fgetc(arquivo_original)) != EOF) {
        fputc(caractere, arquivo_copia);
    }

    // Fecha os arquivos
    fclose(arquivo_original);
    fclose(arquivo_copia);

    printf("Cópia do arquivo texto criada com sucesso.\n");

    return 0;
}
