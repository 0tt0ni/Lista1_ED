#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 50

typedef struct {
    char nome[40];
    float preco;
    int quantidade;
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

void adicionar_produto() {
    if (num_produtos == MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }
    printf("Digite o nome do produto: ");
    fgets(produtos[num_produtos].nome, 40, stdin);
    printf("Digite o preco do produto: ");
    scanf("%f", &produtos[num_produtos].preco);
    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &produtos[num_produtos].quantidade);
    getchar();
    num_produtos++;
}

void comprar_produto() {
    char nome[40];
    int quantidade;
    printf("Digite o nome do produto: ");
    fgets(nome, 40, stdin);
    printf("Digite a quantidade a comprar: ");
    scanf("%d", &quantidade);
    getchar();
    for (int i = 0; i < num_produtos; i++) {
        if (strcmp(produtos[i].nome, nome) == 0) {
            if (quantidade > produtos[i].quantidade) {
                printf("Quantidade insuficiente em estoque.\n");
            } else {
                produtos[i].quantidade -= quantidade;
                printf("Total da compra: %.2f\n", produtos[i].preco * quantidade);
            }
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

int main() {
    int opcao;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Comprar produto\n");
        printf("3. Sair\n");
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1:
                adicionar_produto();
                break;
            case 2:
                comprar_produto();
                break;
            case 3:
                return 0;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }
}
