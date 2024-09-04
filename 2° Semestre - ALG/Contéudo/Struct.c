#include <stdio.h>
#include <stdlib.h>

typedef struct date {
    int dd;
    int mm;
    int aa;
} Tdate;

int main() {
    Tdate dtns[2];
    int idade;

    printf("Dia de hoje (dd mm aaaa): ");
    scanf("%d %d %d", &dtns[0].dd, &dtns[0].mm, &dtns[0].aa);

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dtns[1].dd, &dtns[1].mm, &dtns[1].aa);

    if ((dtns[0].mm > dtns[1].mm) || (dtns[0].mm == dtns[1].mm && dtns[0].dd >= dtns[1].dd)) {
        idade = dtns[0].aa - dtns[1].aa;
    } else {
        idade = dtns[0].aa - dtns[1].aa - 1;
    }

    printf("Idade = %d\n", idade);
    return 0;
}
