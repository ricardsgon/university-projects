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
#include <stdlib.h>
//sintaxe: size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//sintaxe: int fseek ( FILE * stream, long int offset, int origin );
//Deslocamento 	SEEK_SET --> Início do arquivo
//				SEEK_CUR --> Posição atual do arquivo
//				SEEK_END --> Fim do arquivo

//sintaxe: long int ftell(FILE* stream)
//sintaxe: void rewind ( FILE * stream );

int main (int argc, const char *argv[]) {
  FILE * pFile=NULL;
  long lSize;
  char * buffer;
  size_t result;

  pFile = fopen ( argv[1] , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);

  // allocate memory to contain the whole file:
  buffer = (char*) malloc (sizeof(char)*lSize);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

  // copy the file into the buffer:
  result = fread (buffer,1,lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}

  /* the whole file is now loaded in the memory buffer. */
	printf("%s",buffer);
  // terminate
  fclose (pFile);
   pFile = fopen ( argv[2] , "wb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}
  fwrite(buffer,lSize,1,pFile);
  free (buffer);
  buffer=NULL;
  fclose(pFile);
  pFile=NULL;
  return 0;
}
