#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define typeof(var) _Generic( (var),\
char: 0,\
int: 1,\
float: 2,\
char *: 3,\
void *: 4,\
double: 5,\
default: 6)

int* matI(unsigned int);
void criamatrizes(unsigned int*,const char*,...);
//int inicializarmatrizes(const char*,...);


int main(){
float *x=NULL;
float *y=NULL;
unsigned int ta[3]={2,3,0};
//printf("%d",typeof(x));
criamatrizes(ta,"%f%f",&x,&y);
x[0]=2;y[1]=4,y[2]=15.2351;
printf("\n%.2f,%f",x[0],y[2]);

	return 0;
}

int* matI(unsigned int t){
	int* ret=(int*)calloc(t*t,sizeof(int));
	unsigned int j=0;
	for(j=0;j<t;j++)
		*(ret+(j*t+j))=1;
	return ret;
}
void criamatrizes(unsigned int* t, const char* formato,...){
	va_list args;
	unsigned int* tt=t;
	const char *ptr = formato;//ponteiro para percorrer a string de formato
	va_start(args,formato);
	 while (*ptr != '\0') {
		 if (*ptr == '%' && *(ptr + 1) != '\0') {
			 ptr++; // Avança para o especificador de tipo
			if(*ptr=='d'){
					int **iptr = va_arg(args, int **);
					int* iaux=(int*)malloc(sizeof(int)*(*tt++));
					*iptr=iaux;
			}
			if(*ptr=='f'){
					float **fptr = va_arg(args, float **);
					float* faux=(float*)malloc(sizeof(float)*(*tt++));
					*fptr=faux;
			}
			if(*ptr=='c'){
					char **cptr = va_arg(args, char **);
					char* caux=(char*)malloc(sizeof(char)*(*tt++));
					*cptr=caux;
			}
		 }
		 ptr++;
	}
	va_end(args);
}
