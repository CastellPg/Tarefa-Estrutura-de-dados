#include <stdio.h>

int main() {
    char nomes[15][50];
    float notas[15][5];
    int i, j;
    float media_aluno, soma_aluno, soma_classe = 0, media_classe;

    for (i = 0; i < 15; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        for (j = 0; j < 5; j++) {
            printf("Digite a nota da prova %d para %s: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Relatorio Final ---\n");
    for (i = 0; i < 15; i++) {
        soma_aluno = 0;
        for (j = 0; j < 5; j++) {
            soma_aluno += notas[i][j];
        }
        media_aluno = soma_aluno / 5.0;
        soma_classe += media_aluno;
        
        printf("Aluno: %s | Media: %.2f | Situacao: ", nomes[i], media_aluno);
        if (media_aluno >= 7.0) {
            printf("Aprovado\n");
        } else if (media_aluno >= 4.0) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    media_classe = soma_classe / 15.0;
    printf("\nMedia da classe: %.2f\n", media_classe);

    return 0;
}