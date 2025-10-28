#include <stdio.h>

// ===============================================
// Funções recursivas para cada peça
// ===============================================

// TORRE — movimento recursivo (para a direita)
void moverTorre(int casas) {
    if (casas == 0) {
        return; // caso base: termina a recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva para a próxima casa
}

// BISPO — recursivo + loops aninhados (cima, direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) {
        return; // caso base
    }

    // loop externo: movimento vertical (para cima)
    for (int i = 1; i <= 1; i++) { // executa uma vez por chamada recursiva
        // loop interno: movimento horizontal (para direita)
        for (int j = 1; j <= horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(vertical - 1, horizontal); // chamada recursiva
}

// RAINHA — movimento recursivo (para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return; // caso base
    }

    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ===============================================
// CAVALO — loops complexos (para cima e direita)
// ===============================================
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo controla o movimento vertical
    for (int i = 1, j = 0; i <= casasCima; i++, j++) {
        if (i == 1) {
            printf("Cima\n");
        } else if (i == 2) {
            printf("Cima\n");
        }

        // Loop interno controla o movimento horizontal
        for (int k = 1; k <= casasDireita; k++) {
            if (i < casasCima) {
                // Cavalo ainda não completou o "L"
                continue;
            }

            // Quando o cavalo termina o movimento vertical, move para a direita
            printf("Direita\n");

            // Sai do loop após completar o movimento em L
            break;
        }
    }
}

int main() {
    // ===============================================
    // Simulação final — Desafio Nível Mestre
    // ===============================================
    printf("===== SIMULADOR DE MOVIMENTOS DE XADREZ =====\n\n");

    // 1 Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(5); // 5 casas para a direita
    printf("\n");

    // 2 Bispo (recursiva + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1); // 5 movimentos verticais, 1 horizontal por chamada
    printf("\n");

    // 3 Rainha (recursiva)
    printf("Movimento da Rainha:\n");
    moverRainha(8); // 8 casas para a esquerda
    printf("\n");

    // 4 Cavalo (loops complexos)
    moverCavalo();

    printf("\nSimulação concluída!\n");
    printf("=============================================\n");

    return 0;
}