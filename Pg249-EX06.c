#include <stdio.h>

int main() {
    int matriz[20][10];
    int soma_coluna[10] = {0};
    int i, j;

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma_coluna[j] += matriz[i][j];
        }
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] *= soma_coluna[j];
        }
    }

    printf("\n--- Matriz Resultante ---\n");
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}