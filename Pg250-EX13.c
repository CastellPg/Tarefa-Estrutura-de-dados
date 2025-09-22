#include <stdio.h>

int main() {
    int matriz[6][4];
    int i, j, maior_da_linha;

    printf("Preencha a matriz 6x4:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        maior_da_linha = matriz[i][0];
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maior_da_linha) {
                maior_da_linha = matriz[i][j];
            }
        }
        
        for (j = 0; j < 4; j++) {
            matriz[i][j] *= maior_da_linha;
        }
    }

    printf("\nMatriz resultante:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}