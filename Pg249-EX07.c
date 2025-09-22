#include <stdio.h>

int main() {
    int matriz_M[4][6];
    int matriz_N[6][4];
    int soma_linhas_M[4] = {0};
    int soma_colunas_N[4] = {0};
    int i, j;

    printf("Preencha a matriz M (4x6):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz_M[i][j]);
            soma_linhas_M[i] += matriz_M[i][j];
        }
    }

    printf("\nPreencha a matriz N (6x4):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("N[%d][%d]: ", i, j);
            scanf("%d", &matriz_N[i][j]);
            soma_colunas_N[j] += matriz_N[i][j];
        }
    }

    printf("\n--- Soma das linhas de M com as colunas de N ---\n");
    for (i = 0; i < 4; i++) {
        printf("Soma (Linha %d de M + Coluna %d de N) = %d\n", 
               i, i, soma_linhas_M[i] + soma_colunas_N[i]);
    }

    return 0;
}