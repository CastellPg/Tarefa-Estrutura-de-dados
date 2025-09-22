#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20];
    int i, j, aux;

    printf("Primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
        vetor3[i] = vetor1[i];
    }

    printf("\nSegundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor2[i]);
        vetor3[i + 10] = vetor2[i];
    }

    for (i = 0; i < 20; i++) {
        for (j = i + 1; j < 20; j++) {
            if (vetor3[i] < vetor3[j]) {
                aux = vetor3[i];
                vetor3[i] = vetor3[j];
                vetor3[j] = aux;
            }
        }
    }

    printf("\nVetor resultante ordenado decrescente:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}