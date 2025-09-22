#include <stdio.h>

int main() {
    int vetor[15];
    int i;
    int maior, menor, pos_maior, pos_menor;

    for (i = 0; i < 15; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    pos_maior = 0;
    pos_menor = 0;

    for (i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }

    printf("\nMaior numero: %d na posicao: %d\n", maior, pos_maior);
    printf("Menor numero: %d na posicao: %d\n", menor, pos_menor);

    return 0;
}