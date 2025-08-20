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

    return 0;
}
