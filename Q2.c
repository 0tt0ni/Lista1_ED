#include <stdio.h>
#include <stdlib.h>

//Filype Ottoni Campos
//UC22200168

typedef struct {
    int inteiro;
    float flutuante;
    char letra;
} Tipo;

int main() {
    Tipo exemplo;

    printf("Digite um valor inteiro: ");
    scanf("%d", &exemplo.inteiro);

    printf("Digite um valor flutuante (com casas decimais): ");
    scanf("%f", &exemplo.flutuante);

    printf("Digite uma letra: ");
    scanf(" %c", &exemplo.letra);
    
    system("cls");

    printf("\nInteiro (int pode armazenar valores e calculos sem casas decimais): %d\n", exemplo.inteiro);
    printf("Flutuante (Float pode armazenar valores e calculos com casas decimais): %f\n", exemplo.flutuante);
    printf("Letra (char pode armazenar letras e numeros como texto): %c\n", exemplo.letra);

    return 0;
}
