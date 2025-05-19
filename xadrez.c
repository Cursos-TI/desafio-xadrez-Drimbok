#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo (também com loops aninhados)
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    // Versão com loops aninhados (adicional)
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");
    
    // Versão recursiva
    printf("Movimento do Bispo (recursivo):\n");
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o movimento complexo do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    int movimentos_cima = 2;
    int movimentos_direita = 1;
    
    // Loop complexo com múltiplas variáveis e condições
    for (int i = 0, j = 0; i < movimentos_cima || j < movimentos_direita; ) {
        if (i < movimentos_cima) {
            printf("Cima\n");
            i++;
            continue; // Volta para verificar as condições novamente
        }
        
        if (j < movimentos_direita) {
            printf("Direita\n");
            j++;
            // Poderia usar break aqui se quisesse interromper após completar
        }
    }
}

int main() {
    // Constantes para número de movimentos
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;
    
    printf("=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // Torre - movimento recursivo
    printf("Movimento da Torre (%d casas para direita):\n", TORRE_CASAS);
    moverTorre(TORRE_CASAS);
    printf("\n");
    
    // Bispo - versão recursiva e com loops aninhados
    printf("Movimento do Bispo (%d casas na diagonal):\n", BISPO_CASAS);
    moverBispo(BISPO_CASAS);
    printf("\n");
    
    // Rainha - movimento recursivo
    printf("Movimento da Rainha (%d casas para esquerda):\n", RAINHA_CASAS);
    moverRainha(RAINHA_CASAS);
    printf("\n");
    
    // Cavalo - movimento complexo com loops aninhados
    printf("Movimento do Cavalo (2 cima, 1 direita):\n");
    moverCavalo();
    printf("\n");
    
    return 0;
}
