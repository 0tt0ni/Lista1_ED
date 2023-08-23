#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Filype Ottoni Campos
//UC22200168
typedef struct {
    float x;
    float y;
} Ponto;

	float distancia(Ponto p1, Ponto p2) {
	
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

	float inclinacao(Ponto p1, Ponto p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
    Ponto p1, p2;

    	printf("Digite as coordenadas x e y do primeiro ponto (e necessario digitar o numero e apertar enter para armazenar): ");
scanf("%f %f", &p1.x, &p1.y);

    	printf("Digite as coordenadas x e y do segundo ponto (e necessario digitar o numero e apertar enter para armazenar): ");
scanf("%f %f", &p2.x, &p2.y);

    system("cls");

    	printf("\nDistancia entre os pontos: %f\n", distancia(p1, p2));
    	printf("Inclinacao da reta que conecta os pontos: %f\n", inclinacao(p1, p2));
    	

    return 0;
}
