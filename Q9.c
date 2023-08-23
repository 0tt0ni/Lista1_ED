#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Filype Ottoni Campos
//UC22200168

typedef struct {
    char nome[40];
    char cargo[30];
    float salario;
    int dia_admissao;
    int mes_admissao;
    int ano_admissao;
} Funcionario;



void aumento_salario(Funcionario *func, float percentual) {
    func->salario += func->salario * percentual / 100;
}


int tempo_empresa(Funcionario func, int dia_atual, int mes_atual, int ano_atual) {
    int anos = ano_atual - func.ano_admissao;
    if (mes_atual < func.mes_admissao ||
        (mes_atual == func.mes_admissao && dia_atual < func.dia_admissao)) {
        anos--;
    }
    return anos;
}


int main() {
    Funcionario joao;

    		printf("Digite o nome do funcionario: ");
    fgets(joao.nome, 50, stdin);
    joao.nome[strcspn(joao.nome, "\n")] = 0;

    		printf("Digite o cargo do funcionario: ");
    fgets(joao.cargo, 50, stdin);
    joao.cargo[strcspn(joao.cargo, "\n")] = 0;

    		printf("Digite o salario do funcionario: ");
    scanf("%f", &joao.salario);

    		printf("Digite a data de admissao do funcionario (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &joao.dia_admissao, &joao.mes_admissao, &joao.ano_admissao);

		    printf("\nNome: %s\n", joao.nome);
		    printf("Cargo: %s\n", joao.cargo);
		    printf("Salario: %.2f\n", joao.salario);
		    printf("Data de admissao: %d/%d/%d\n", joao.dia_admissao, joao.mes_admissao, joao.ano_admissao);

    float percentual;
    		printf("\nDigite o percentual de aumento: ");
    scanf("%f", &percentual);
    
    aumento_salario(&joao, percentual);
    
    		printf("Salario pos-ajuste: %.2f\n", joao.salario);

    int dia_atual, mes_atual, ano_atual;
    
   			printf("\nDigite a data de hoje: (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    int anos = tempo_empresa(joao, dia_atual, mes_atual, ano_atual);
    
    		printf("Tempo de empresa: %d anos\n", anos);

    return 0;
}
