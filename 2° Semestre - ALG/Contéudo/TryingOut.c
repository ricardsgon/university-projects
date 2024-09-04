#include <stdio.h>
#include <locale.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // p aponta para o primeiro elemento de arr

    printf("Elemento 0: %d\n", *p); // Imprime 1
    for (int i = 1; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, *(p + i)); // Imprime 2
    }
}