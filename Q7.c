#include <stdio.h>
#include <stdlib.h>

//Filype Ottoni Campos
//UC22200168

typedef struct {
    char nome[40];
    int numero;
    float saldo;
} ContaBancaria;



void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}


void sacar(ContaBancaria *conta, float valor) {
    if (valor > conta->saldo) {
        	printf("Voce nao possui saldo para o saque.\n");
    } else {
        conta->saldo -= valor;
    }
}


void verificar_saldo(ContaBancaria conta) {
    		printf("Saldo: %.2f\n", conta.saldo);
}

int main() {
	
    ContaBancaria conta;
    		printf("Digite o nome do titular da conta: ");
    fgets(conta.nome, 100, stdin);
    		printf("Digite o numero da conta: ");
    scanf("%d", &conta.numero);
    conta.saldo = 0;
    
    int opcao;
    float valor;
    
    while (1) {
        	printf("\nMenu:\n");
        	printf("1 - Depositar\n");
        	printf("2 - Sacar\n");
        	printf("3 - Verificar saldo\n");
        	printf("4 - Finalizar\n");
        	printf("\nDigite o numero da funcao que deseja utilizar: ");
    scanf("%d", &opcao);
    
    
        switch (opcao) {
            case 1:
                printf("Digite o valor do deposito: ");
    scanf("%f", &valor);
                depositar(&conta, valor);
                break;
                
            case 2:
                printf("Digite o valor do saque: ");
    scanf("%f", &valor);
                sacar(&conta, valor);
                break;
                
            case 3:
                verificar_saldo(conta);
                break;
                
            case 4:
                return 0;
            default:
            	
                printf("Opcao invalida.\n");
            break;
            
        }
    }
}
