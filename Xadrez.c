#include <stdio.h>

// Constantes para quantidade de movimentos
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    // Movimentação do Bispo - Diagonal Superior Direita
    // Usando estrutura de repetição "for"
    printf("Movimento do Bispo:\n");
    for(int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Linha separadora para melhor leitura da saída
    printf("-----------------------\n");

    // Movimentação da Torre - Direita
    // Usando estrutura de repetição "while"
    printf("Movimento da Torre:\n");
    int j = 0;
    while(j < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        j++;
    }

    // Linha separadora para melhor leitura da saída
    printf("-----------------------\n");

    // Movimentação da Rainha - Esquerda
    // Usando estrutura de repetição "do...while"
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < MOVIMENTOS_RAINHA);

    return 0;
}
