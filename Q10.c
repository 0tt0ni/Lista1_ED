#include <stdio.h>
#include <stdlib.h>

//Filype Ottoni Campos
//UC22200168

typedef struct {
	
    float dolar;
    float euro;
} Moeda;



int main() {
    Moeda moeda;
    int opcao;
    float valor, taxa;

    		printf("escolha a moeda que deseja converter: \n1. Dolar para Euro \n2. Euro para Dolar \n");
    scanf("%d", &opcao);

    		printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    		printf("Digite a taxa atual do cambio da moeda: ");
    scanf("%f", &taxa);

    if (opcao == 1) {
        moeda.dolar = valor;
        moeda.euro = valor * taxa;
        
        	printf("%.2f dolares equivalem a %.2f euros\\n", moeda.dolar, moeda.euro);
    } else 
	if (opcao == 2) {
        moeda.euro = valor;
        moeda.dolar = valor * taxa;
        	printf("%.2f euros equivalem a %.2f dolares\\n", moeda.euro, moeda.dolar);
    } else {
    	
        	printf("Opcao invalida\\n");
    }

    return 0;
}
