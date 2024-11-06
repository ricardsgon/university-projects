/*Fun��es de manipula��o de arquivos
 * fopen()
 * fclose()
 * fputs()
 * fgets()
 * fread()
 * ftell()
 * fwrite()
 * fseek()
 * fsetpos()
 * fgetpos()
 * rewind()
 * feof() */
#include <stdio.h>

// Tipo: FILE*
// Sintaxe: FILE * fopen (const char * filename, const char * mode);
// Modos: "r"  --> leitura, o arquivo deve existir
//        "w"  --> cria arquivo para escrita
//        "a"  --> adi��o de dados, cria arquivo se n�o existir
//        "r+" --> leitura e atualiza��o de dados, o arquivo deve existir
//        "w+" --> cria arquivo para leitura e escrita
//        "a+" --> adi��o e atualiza��o de dados em qualquer ponto do arquivo
//        "b"  --> manipula o arquivo como stream
// Sintaxe: fclose(FILE* stream)
// Sintaxe: fputs(const char* str, FILE* stream)

int main() {
    FILE* parqlogico = NULL;
    parqlogico = fopen("texto.txt", "w");
    if (parqlogico) {
        fputs("Tentativa de cria��o de texto.\n", parqlogico);
        fputs("Mais uma mensagem.\n", parqlogico);
    }
    fclose(parqlogico);
    parqlogico = NULL;
    return 0;
}
