#include <stdio.h>

int main() {
    int opcao;
    char nomeProduto[50];
    float preco;
    int quantidade;

    printf("=== LOJA VIRTUAL ===\n");
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

        printf("\nProduto cadastrado com sucesso!\n");
        printf("Nome: %s\n", nomeProduto);
        printf("Preco: R$ %.2f\n", preco);
        printf("Quantidade: %d\n", quantidade);
    }

    return 0;
}
