#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int A[n];

    // Leer elementos
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Imprimir elementos
    printf("\nElementos del vector:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
