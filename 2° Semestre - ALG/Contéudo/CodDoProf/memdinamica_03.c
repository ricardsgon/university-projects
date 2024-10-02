#include <stdio.h>   
#include <stdlib.h>    
int main ()
{
  int entrada,n;
  int cont = 0;
  int* numeros = NULL;
  int* mais_numeros = NULL;

  do {
     printf ("Entre com um valor inteiro (0 termina): ");
     scanf ("%d", &entrada);
     cont++;

     mais_numeros = (int*) realloc (numeros, cont * sizeof(int));

     if (mais_numeros!=NULL) {
       numeros=mais_numeros;
       numeros[cont-1]=entrada;
     }
     else
     {
       free (numeros);
       numeros=NULL;
       mais_numeros=NULL;
       puts ("Error (re)alocação de memória");
       exit (1);
     }
  } while (entrada!=0);

  printf ("numeros entrada: ");
  for (n=0;n<cont-1;n++) 
	printf ("%d, ",*(numeros+n));
  free (numeros);
  numeros=NULL;
  mais_numeros=NULL;
  return 0;
}
