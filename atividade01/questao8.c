/*8. Estoque Simples
Crie uma struct Produto com nome, código, quantidade e preço. Permita cadastrar, buscar e listar produtos.*/

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void listarProdutos(Produto produtos[], int total) {
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < total; i++) {
        printf("Código: %d | Nome: %s | Quantidade: %d | Preço: R$ %.2f\n",
               produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
    }
}

void buscarProduto(Produto produtos[], int total, int codigo) {
    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado: %s - Quantidade: %d - Preço: R$ %.2f\n",
                   produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

int main() {
    Produto produtos[MAX];
    int total = 0, opcao, codigo;

    do {
        printf("\n1 - Cadastrar Produto\n2 - Buscar Produto\n3 - Listar Produtos\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total < MAX) {
                    printf("Nome: ");
                    scanf(" %[^\n]", produtos[total].nome);
                    printf("Código: ");
                    scanf("%d", &produtos[total].codigo);
                    printf("Quantidade: ");
                    scanf("%d", &produtos[total].quantidade);
                    printf("Preço: ");
                    scanf("%f", &produtos[total].preco);
                    total++;
                } else {
                    printf("Limite de produtos atingido.\n");
                }
                break;
            case 2:
                printf("Digite o código do produto: ");
                scanf("%d", &codigo);
                buscarProduto(produtos, total, codigo);
                break;
            case 3:
                listarProdutos(produtos, total);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
