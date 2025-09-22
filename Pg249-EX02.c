#include <stdio.h>

int main() {
    int matriz[2][4];
    int i, j;
    int qtd_linha[2] = {0, 0};
    int soma_pares = 0, count_pares = 0;
    float media_pares;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20) {
                qtd_linha[i]++;
            }
            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                count_pares++;
            }
        }
    }

    printf("\nQuantidade de elementos entre 12 e 20 em cada linha:\n");
    printf("Linha 0: %d\n", qtd_linha[0]);
    printf("Linha 1: %d\n", qtd_linha[1]);

    if (count_pares > 0) {
        media_pares = (float)soma_pares / count_pares;
        printf("\nMedia dos elementos pares da matriz: %.2f\n", media_pares);
    } else {
        printf("\nNenhum elemento par encontrado.\n");
    }

    return 0;
}