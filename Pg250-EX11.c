#include <stdio.h>

int main() {
    int idades[8];
    int codigos_disciplinas[5];
    int provas[8][5];
    int i, j;

    printf("--- Cadastro de Idades dos Alunos ---\n");
    for (i = 0; i < 8; i++) {
        printf("Idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("\n--- Cadastro de Codigos das Disciplinas ---\n");
    for (i = 0; i < 5; i++) {
        printf("Codigo da disciplina %d: ", i + 1);
        scanf("%d", &codigos_disciplinas[i]);
    }

    printf("\n--- Quantidade de Provas por Aluno/Disciplina ---\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            printf("Provas do aluno %d na disciplina %d: ", i + 1, codigos_disciplinas[j]);
            scanf("%d", &provas[i][j]);
        }
    }

    printf("\n--- DADOS ARMAZENADOS COM SUCESSO ---\n");
    
    return 0;
}