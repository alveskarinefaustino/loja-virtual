#include <stdio.h>

int main() {
    int opcao;
    char nomeProduto[50] = "";
    float preco = 0;
    int quantidade = 0;
    int produtoCadastrado = 0;

    do {
        printf("\n=== LOJA VIRTUAL ===\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n=== CADASTRO DE PRODUTO ===\n");

            printf("Nome do produto: ");
            scanf(" %[^\n]", nomeProduto);

            printf("Preco: R$ ");
            scanf("%f", &preco);

            printf("Quantidade em estoque: ");
            scanf("%d", &quantidade);

            produtoCadastrado = 1;

            printf("\nProduto cadastrado com sucesso!\n");

        } else if (opcao == 2) {
            printf("\n=== LISTA DE PRODUTOS ===\n");

            if (produtoCadastrado == 1) {
                printf("Produto: %s\n", nomeProduto);
                printf("Preco: R$ %.2f\n", preco);
                printf("Quantidade em estoque: %d\n", quantidade);
            } else {
                printf("Nenhum produto cadastrado.\n");
            }

        } else if (opcao == 3) {
            printf("\nEncerrando o sistema...\n");

        } else {
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 3);

    return 0;
}
