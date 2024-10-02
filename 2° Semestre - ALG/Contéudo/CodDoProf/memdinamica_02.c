#include <stdio.h>
#include <stdlib.h>

typedef struct coordenadas{
	int x;//coordenada "x"
	int y;//coordenada "y"
}Tcoord;

int main()
{
	int ind;
	int tamanho;
	Tcoord *memoria=NULL;//área reservada para dados
	do
	{
		printf ("N° de elementos a armazenar?: ");
		scanf ("%d",&tamanho);
		if (tamanho<0)
			tamanho=tamanho*(-1);
	}while (tamanho == 0);
	memoria=(Tcoord*)malloc(sizeof(Tcoord)*tamanho);
	if (memoria)
		printf("memória criada com sucesso!\n");
	else
	{
		free(memoria);
		memoria=NULL;
		exit (1);
	}
	for (ind = 0; ind<tamanho; ind++)
	{
		printf ("(x%d,y%d) ",ind,ind);
		scanf (" %d,%d",&memoria[ind].x,&memoria[ind].y);
	}
	for (ind = 0; ind<tamanho; ind++)
		printf ("(%d,%d)\n",memoria[ind].x,memoria[ind].y);
	free(memoria);
	memoria=NULL;
	return 0;
}
