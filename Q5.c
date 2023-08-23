#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50

//Filype Ottoni Campos
//UC22200168

typedef struct {
	
    char titulo[20];
    char autor[30];
    int ano;
    
} Livro;



Livro livros[MAX_LIVROS];
int num_livros = 0;

void adicionar_livro() {
	
    if (num_livros == MAX_LIVROS) {
        	printf("Nao e possivel adicionar mais livros.\n");
        return;
    }
    		printf("Digite o titulo do livro: ");
    fgets(livros[num_livros].titulo, 100, stdin);
    
    		printf("Digite o autor do livro: ");
    fgets(livros[num_livros].autor, 100, stdin);
    
    		printf("Digite o ano de publicacao do livro: ");
    scanf("%d", &livros[num_livros].ano);
    getchar();
    
    num_livros++;
}



void listar_livros() {
    for (int i = 0; i < num_livros; i++) {
    	
        printf("Titulo: %s", livros[i].titulo);
        printf("Autor: %s", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
        
    }
}



void buscar_por_autor() {
    char autor[100];
    
    		printf("Digite o nome do autor: ");
    fgets(autor, 100, stdin);
    
    for (int i = 0; i < num_livros; i++) {
    	
    if (strcmp(livros[i].autor, autor) == 0) {
    	
            printf("Titulo: %s", livros[i].titulo);
            printf("Autor: %s", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            
        }
    }
}



int main() {
    int opcao;
    
    while (1) {
        printf("\nMenu de funcoes:\n");
        printf("1 - Adicionar novo livro\n");
        printf("2 - Listar livros no sistema\n");
        printf("3 - Buscar por autor\n");
        printf("4 - Finalizar\n");
        printf("\nDigite o numero da funcao que deseja utilizar: ");
        
    scanf("%d", &opcao);
    getchar();
    
        switch (opcao) {
        	
        case 1:
                adicionar_livro();
                break;
                
        case 2:
                listar_livros();
                break;
                
        case 3:
                buscar_por_autor();
                break;
                
        case 4:
        return 0;
    	default:
        printf("Opcao invalida.\n");
        
                break;
        }
    }
}
