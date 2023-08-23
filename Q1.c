#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Filype Ottoni Campos
//UC22200168

typedef struct{
    char nome[40];
    int idade;
    char altura[5];
} Pessoa;

Pessoa SetPessoa(const char *nome, int idade, const char *altura)
{
    Pessoa P;
    strcpy(P.nome, nome);
    P.idade = idade;
    strcpy(P.altura, altura);
    return P;
}

void ImprimePessoa(Pessoa P)
{
    printf("Nome: %s  \nIdade: %d \nAltura: %s\n", P.nome, P.idade, P.altura);
}

int main(void) {
    char nome[40];
    int idade;
    char altura[10];
    
    printf("Digite o nome: ");
    scanf("%s", nome);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite a altura: ");
    scanf("%s", altura);
    
    Pessoa p1 = SetPessoa(nome, idade, altura);
    
    system("cls");
    
    ImprimePessoa(p1);
    
    return 0;
}
