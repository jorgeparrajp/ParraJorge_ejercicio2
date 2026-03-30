#include <stdio.h>

int main(void) {
    int inicial, final, c;

    printf("Numero inicial: ");
    scanf("%d", &inicial);

    printf("Numero final: ");
    scanf("%d", &final);

    printf("Incremento: ");
    scanf("%d", &c);

    for (int i = inicial; (i - final) * c <= 0; i += c)
        printf("%d ", i);

    return 0;
}