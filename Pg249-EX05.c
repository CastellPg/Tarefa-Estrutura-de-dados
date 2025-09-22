#include <stdio.h>

int main() {
    float vendas[12][4];
    char* meses[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", 
                       "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    float total_mes[12] = {0};
    float total_semana[4] = {0};
    float total_ano = 0;
    int i, j;

    for (i = 0; i < 12; i++) {
        printf("\nMes de %s:\n", meses[i]);
        for (j = 0; j < 4; j++) {
            printf("Vendas da semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
            total_mes[i] += vendas[i][j];
            total_semana[j] += vendas[i][j];
            total_ano += vendas[i][j];
        }
    }
    
    printf("\n--- Total de vendas por mes ---\n");
    for (i = 0; i < 12; i++) {
        printf("%s: R$ %.2f\n", meses[i], total_mes[i]);
    }
    
    printf("\n--- Total de vendas por semana do ano ---\n");
    for (j = 0; j < 4; j++) {
        printf("Semana %d: R$ %.2f\n", j + 1, total_semana[j]);
    }
    
    printf("\n--- Total vendido no ano ---\n");
    printf("Total Anual: R$ %.2f\n", total_ano);

    return 0;
}