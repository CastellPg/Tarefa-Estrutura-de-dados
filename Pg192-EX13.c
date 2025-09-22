#include <stdio.h>

int main() {
    char nomes[8][50];
    float notas[8];
    int i;
    float soma_notas = 0.0, media_classe;

    for (i = 0; i < 8; i++) {
        printf("Digite o nome do %d.o aluno: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a nota do %s: ", nomes[i]);
        scanf("%f", &notas[i]);
        soma_notas += notas[i];
    }

    printf("\nRelatorios de notas\n");
    for (i = 0; i < 8; i++) {
        printf("%s %.1f\n", nomes[i], notas[i]);
    }
    
    media_classe = soma_notas / 8.0;
    printf("Media da classe = %.2f\n", media_classe);

    return 0;
}