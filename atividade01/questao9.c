/*9. Agenda de Contatos
Crie uma struct Contato e permita adicionar, buscar por nome e exibir todos os contatos.*/

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    char telefone[15];
    char email[50];
} Contato;

void buscarContato(Contato contatos[], int total, char nomeBusca[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("Nome: %s | Telefone: %s | Email: %s\n",
                   contatos[i].nome, contatos[i].telefone, contatos[i].email);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void listarContatos(Contato contatos[], int total) {
    printf("\nLista de Contatos:\n");
    for (int i = 0; i < total; i++) {
        printf("Nome: %s | Telefone: %s | Email: %s\n",
               contatos[i].nome, contatos[i].telefone, contatos[i].email);
    }
}

int main() {
    Contato contatos[MAX];
    int total = 0, opcao;
    char nomeBusca[50];

    do {
        printf("\n1 - Adicionar Contato\n2 - Buscar Contato\n3 - Listar Contatos\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total < MAX) {
                    printf("Nome: ");
                    scanf(" %[^\n]", contatos[total].nome);
                    printf("Telefone: ");
                    scanf(" %[^\n]", contatos[total].telefone);
                    printf("Email: ");
                    scanf(" %[^\n]", contatos[total].email);
                    total++;
                } else {
                    printf("Limite de contatos atingido.\n");
                }
                break;
            case 2:
                printf("Digite o nome do contato: ");
                scanf(" %[^\n]", nomeBusca);
                buscarContato(contatos, total, nomeBusca);
                break;
            case 3:
                listarContatos(contatos, total);
                break;
            case 0:
                printf("Encerrando agenda...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}


