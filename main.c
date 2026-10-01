#include <stdio.h>

int main() {
    int opcao;

    printf("=== LOJA VIRTUAL ===\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Opcao escolhida: %d\n", opcao);

    return 0;
}
