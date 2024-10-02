#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ind;
	int tamanho;
	int *memoria=NULL;
	do
	{
		printf ("N° de elementos a armazenar?: ");
		scanf ("%d",&tamanho);
		if (tamanho<0)
			tamanho=tamanho*(-1);
	}while (tamanho == 0);
	memoria=(int*)calloc(tamanho,sizeof(int));
	if (memoria)
		printf("memória criada com sucesso!\n");
	else
	{
		free(memoria);
		memoria=NULL;
		exit (1);
	}
	for (ind = 0; ind<tamanho; ind++)
		printf ("%d\n",memoria[ind]);
	free(memoria);
	memoria=NULL;
	return 0;
}
