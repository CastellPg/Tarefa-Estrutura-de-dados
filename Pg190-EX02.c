#include <stdio.h>

int main() {
    int numeros[7];
    int i;

    for (i = 0; i < 7; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nMultiplos de 2: ");
    for (i = 0; i < 7; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nMultiplos de 3: ");
    for (i = 0; i < 7; i++) {
        if (numeros[i] % 3 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nMultiplos de 2 e 3: ");
    for (i = 0; i < 7; i++) {
        if (numeros[i] % 2 == 0 && numeros[i] % 3 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}