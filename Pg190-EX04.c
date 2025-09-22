#include <stdio.h>

int main() {
    int vetor[15];
    int i, achou = 0;

    for (i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nPosicoes do numero 30: ");
    for (i = 0; i < 15; i++) {
        if (vetor[i] == 30) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("Nenhum numero 30 encontrado.");
    }
    printf("\n");

    return 0;
}