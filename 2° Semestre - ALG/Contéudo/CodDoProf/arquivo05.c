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
//sintaxe: int fsetpos ( FILE * stream, const fpos_t * pos );
//sintaxe: int fgetpos ( FILE * stream, fpos_t * pos );
//sintaxe: int feof ( FILE * stream );

int main ()
{
  FILE * pFile=NULL;
  fpos_t position;
  pFile = fopen ("myfile.txt","w");
  fgetpos (pFile, &position);
  fputs ("That is a sample",pFile);
  fsetpos (pFile, &position);
  fseek(pFile,2,SEEK_CUR);
  fputs ("This",pFile);
  printf("%d\n",feof(pFile));
  fgetpos (pFile, &position);
  printf("%ld\n",position);
  fclose (pFile);
  return 0;
}
