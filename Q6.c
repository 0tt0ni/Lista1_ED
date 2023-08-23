#include <stdio.h>
#include <stdlib.h>

//Filype Ottoni Campos
//UC22200168

typedef struct {
    char nome[40];
    int matricula;
    float notas[3];
} Estudante;



float calcular_media(Estudante e) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += e.notas[i];
    }
    return soma / 3;
}

int esta_aprovado(Estudante e) {
    return calcular_media(e) >= 7;
}

int main() {
	
    Estudante e;
    		printf("Digite o nome do aluno: ");
    fgets(e.nome, 100, stdin);
    		printf("Digite a matricula do aluno: ");
    scanf("%d", &e.matricula);
    
    for (int i = 0; i < 3; i++) {
        	printf("Digite a nota da displina em questao %d: ", i + 1);
        scanf("%f", &e.notas[i]);
    }
    		printf("\nNome: %s", e.nome);
    		printf("Matricula: %d\n", e.matricula);
    		printf("Media: %.2f\n", calcular_media(e));
    		
    if (esta_aprovado(e)) {
        	printf("O estudante foi aprovado.\n");
    }else{
        	printf("O estudante foi reprovado.\n");
        	
    }
}
