#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[13];
} Contato;

Contato lista_contatos[MAX_CONTATOS];
int num_contatos = 0;

void adicionar_contato() {
    if (num_contatos == MAX_CONTATOS) {
        printf("limite maximo de contatos atingido\n");
        return;
    }

    printf("Digite o nome do contato: ");
    scanf("%s", lista_contatos[num_contatos].nome);

    printf("Digite o numero de telefone do contato: ");
    scanf("%s", lista_contatos[num_contatos].telefone);

    num_contatos++;
}

void listar_contatos() {
    printf("\nLista de Contatos:\n");
    for (int i = 0; i < num_contatos; i++) {
        printf("%s - %s\n", lista_contatos[i].nome, lista_contatos[i].telefone);
    }
}

void buscar_contato() {
    char nome[50];
    printf("Digite o nome do contato: ");
    scanf("%s", nome);

    for (int i = 0; i < num_contatos; i++) {
        if (strcmp(lista_contatos[i].nome, nome) == 0) {
            printf("\nContato encontrado:\n");
            printf("%s - %s\n", lista_contatos[i].nome, lista_contatos[i].telefone);
            return;
        }
    }

    printf("\nContato inexistente.\n");
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Lista de Contatos\n");
        printf("3. Buscar Contato\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_contato();
                break;
            case 2:
                listar_contatos();
                break;
            case 3:
                buscar_contato();
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
