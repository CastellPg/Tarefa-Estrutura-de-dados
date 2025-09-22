#include <stdio.h>

int main() {
    int matriz[3][5];
    int i, j, quantidade = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
                quantidade++;
            }
        }
    }

    printf("\nQuantidade de elementos entre 15 e 20: %d\n", quantidade);

    return 0;
}