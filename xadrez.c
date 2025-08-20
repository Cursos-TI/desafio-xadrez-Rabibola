#include <stdio.h>


int main() {

    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // Torre: Move 5 casas para a direita usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    int casas_torre = 5;
    
    for(int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo: Move 5 casas na diagonal (cima/direita) usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal cima/direita):\n");
    int casas_bispo = 5;
    int contador_bispo = 0;
    
    while(contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");
    

    return 0;
}
