#include <stdio.h>

int main() {
    float vetor[10];
    int i, qtd_negativos = 0;
    float soma_positivos = 0.0;

    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            qtd_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", qtd_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}