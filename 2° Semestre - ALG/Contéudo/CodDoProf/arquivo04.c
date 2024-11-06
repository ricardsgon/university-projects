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
#include "listase.h"
//sintaxe: size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
int main(){
	Tlista *ll;
	Tno dados;
	Tno* nno;
	FILE* parqlogico=NULL;
	parqlogico=fopen("basedados.db","wb");
	if(parqlogico){
		ll=lista_criar();
		cadastro(&dados);
		lista_inserir_ordenado(ll,dados.info);
		cadastro(&dados);
		lista_inserir_ordenado(ll,dados.info);
		lista_imprimir(ll);
		//salvando em disco
		for(nno=ll->referencia;nno!=NULL;nno=nno->prox){
			fwrite(nno,sizeof(dados),1,parqlogico);
		}
		fclose(parqlogico);
	}
	free(ll);
	return 0;
}
