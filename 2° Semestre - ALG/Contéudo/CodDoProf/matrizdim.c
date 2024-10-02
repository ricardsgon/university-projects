#include <stdio.h>   
#include <stdlib.h>    
int main ()
{
	int *matriz=NULL;
	int i,j,nl,nc;
	do
	{
		printf ("N° Linhas: ");
		scanf ("%d",&nl);
		if (nl < 0)
			nl=nl*(-1);
	}while (nl == 0);
	do
	{
		printf ("N° Colunas: ");
		scanf ("%d",&nc);
		if (nc < 0)
			nc=nc*(-1);
	}while (nc == 0);
	matriz=(int*)malloc(sizeof(int)*nc*nl);
	if (matriz)
	{
		for (i=0;i < nl;i++)
		{
			for (j=0;j < nc; j++)
			{
				printf ("Matriz[%d][%d]: ",i,j);
				scanf (" %d",matriz+(i*nc+j));
			}
		}
	}
	else
	{
		free (matriz);
		matriz=NULL;
		printf ("Erro ao alocar a matriz\n");
		exit (1);
	}
	if (nl == nc)
	{
		printf("Diagonal principal = ");
		for (j=0;j < nl;j++)
			printf("%d, ",*(matriz+(j*nl+j)));
	}
	else
	{
		for (j=0;j < nc;j++)
		{
			for (i=0;i < nl; i++)
				printf ("| %d ",*(matriz+(i*nc+j)));
			printf ("|\n");
		}
	}
	free(matriz);
	matriz=NULL;
	return 0;
}
