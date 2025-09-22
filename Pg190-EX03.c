#include <stdio.h>

int main() {
    int codigos[10];
    int estoques[10];
    int cliente_cod, produto_cod, quantidade;
    int i, produto_idx, achou;

    for (i = 0; i < 10; i++) {
        printf("Codigo produto %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Estoque produto %d: ", i + 1);
        scanf("%d", &estoques[i]);
    }

    printf("\nCliente (0 para sair): ");
    scanf("%d", &cliente_cod);

    while (cliente_cod != 0) {
        printf("Produto: ");
        scanf("%d", &produto_cod);
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        achou = 0;
        produto_idx = -1;
        for (i = 0; i < 10; i++) {
            if (codigos[i] == produto_cod) {
                achou = 1;
                produto_idx = i;
                break;
            }
        }

        if (achou == 0) {
            printf("Codigo inexistente.\n");
        } else {
            if (estoques[produto_idx] >= quantidade) {
                estoques[produto_idx] -= quantidade;
                printf("Pedido atendido. Obrigado e volte sempre.\n");
            } else {
                printf("Nao temos estoque suficiente dessa mercadoria.\n");
            }
        }
        
        printf("\nCliente (0 para sair): ");
        scanf("%d", &cliente_cod);
    }

    printf("\nEstoque final:\n");
    for (i = 0; i < 10; i++) {
        printf("Cod: %d | Estoque: %d\n", codigos[i], estoques[i]);
    }

    return 0;
}