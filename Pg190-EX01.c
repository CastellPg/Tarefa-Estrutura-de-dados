#include <stdio.h>

int main() {
    int numeros[6];
    int i, total_pares = 0, total_impares = 0;

    for (i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nPares: ");
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            total_pares++;
        }
    }
    printf("\nTotal de pares: %d\n", total_pares);

    printf("\nImpares: ");
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            total_impares++;
        }
    }
    printf("\nTotal de impares: %d\n", total_impares);

    return 0;
}