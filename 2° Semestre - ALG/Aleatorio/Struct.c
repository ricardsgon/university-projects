#include <stdio.h>
#include <stdlib.h>

typedef struct date {
    int dd;
    int mm;
    int aa;
} Tdate;

int main() {
    Tdate dtns, hoje;
    int idade;

    printf("Dia de hoje (dd mm aaaa): ");
    scanf("%d %d %d", &hoje.dd, &hoje.mm, &hoje.aa);

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dtns.dd, &dtns.mm, &dtns.aa);

    if ((hoje.mm > dtns.mm) || (hoje.mm == dtns.mm && hoje.dd >= dtns.dd)) {
        idade = hoje.aa - dtns.aa;
    } else {
        idade = hoje.aa - dtns.aa - 1;
    }

    printf("Idade = %d\n", idade);
    return 0;
}
