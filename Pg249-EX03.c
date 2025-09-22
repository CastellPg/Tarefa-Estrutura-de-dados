#include <stdio.h>

int main() {
    int matriz[6][3];
    int i, j;
    int maior, menor;
    int linha_maior, col_maior, linha_menor, col_menor;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];
    linha_maior = 0;
    col_maior = 0;
    linha_menor = 0;
    col_menor = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                col_maior = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                col_menor = j;
            }
        }
    }

    printf("\nMaior elemento: %d na posicao [%d][%d]\n", maior, linha_maior, col_maior);
    printf("Menor elemento: %d na posicao [%d][%d]\n", menor, linha_menor, col_menor);

    return 0;
}