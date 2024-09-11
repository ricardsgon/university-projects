#include <stdio.h>
#include <stdarg.h>

unsigned int printfloats(unsigned int,...);
void printfloats2(const char*,...);
double fouroperation(char, int,...);

int main(){
	printf("%.2f\n", fouroperation('+',3,2.5,3.0,1.5));
	//printfloats2("%f, %.2f, %.4f, %d",5.985,6.896,7.23,x);
	//printfloats(4,5.985,6.896,7.23,12.343);
	return 0;
}
double fouroperation(char op, int n  ,...){
	double tot,aux;
	va_list v;
	int i;
	if(op=='+'|| op=='-'){
		tot=0;aux=0;
	}
	if(op=='*' || op=='/'){
		tot=1;aux=0;
	}
	va_start(v,n);
	for(i=0;i<n;i++){
		aux=va_arg(v,double);
		printf("%.2f ",aux);
		switch(op){
			case '+':
				tot=tot+aux;
				break;
			case '-':
				tot=tot-aux;
				break;
			case '*':
				tot=tot*aux;
				break;
			case '/':
				if(aux!=0)
					tot=tot/aux;
				break;
			}
		}
		va_end(v);
		return tot;
	}

unsigned int printfloats (unsigned int n, ...)
{
  int i;
  double val;
  printf ("Imprimir floats:");
  va_list vl;//tipo de dados lista de parâmetros
  va_start(vl,n);//ativa a lista de parâmetros
  for (i=0;i<n;i++)
  {
    val=va_arg(vl,double);//lê cada argumento contido na lista
    printf (" [%.2f]",val);
  }
  va_end(vl);//encerra o uso da lista de parâmetros
  printf ("\n");
  return n;
}
void printfloats2 (const char* formato, ...)
{
  va_list vl;
  va_start(vl,formato);
  vprintf (formato,vl);
  va_end(vl);
  printf ("\n");
}
