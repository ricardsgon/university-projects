/*Funções manipulação de arquivos
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
 * feof()*/
#include <stdio.h>
//sintaxe: char * fgets ( char * str, int num, FILE * stream );

int main(){
	FILE* parqlogico=NULL;
	char texto[256];
	parqlogico=fopen("texto.txt","r");
	if(parqlogico){
		if(fgets(texto,256,parqlogico)!=NULL){
			printf("%s\n",texto);
		}
		if(fgets(texto,256,parqlogico)!=NULL){
			printf("%s\n",texto);
		}
		fclose(parqlogico);
	}
	return 0;
}
