#include <stdio.h>
typedef struct complexo
{
    float a;
    float b;
} Tcomplexo;
Tcomplexo lerc()
{
    Tcomplexo result;
    printf("(a + bi): ");
    scanf("%f  %f", &result.a, &result.b);
    return result;
}
void escreverc(Tcomplexo a){
    printf("(a + bi): %.1f + %.1fi\n", a.a, a.b);
}    
float realc(Tcomplexo a){
    return a.a;
}
float imaginarioc(Tcomplexo a){
    return a.b;
}

int main()
{
    Tcomplexo z;
    z = lerc();
    escreverc(z);
    printf("%.1f\n", realc(z));
    printf("%.1f", imaginarioc(z));
    return 0;
}
