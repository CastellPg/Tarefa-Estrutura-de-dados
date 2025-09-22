#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int i, total_pares = 0, total_impares = 0;

    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares[total_pares] = numeros[i];
            total_pares++;
        } else {
            impares[total_impares] = numeros[i];
            total_impares++;
        }
    }

    printf("\nVetor com numeros pares:\n");
    for (i = 0; i < total_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nVetor com numeros impares:\n");
    for (i = 0; i < total_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}