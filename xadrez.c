#include <stdio.h>

int main() {
    // =========================================
    // Simulação de movimentação das peças de xadrez
    // Desafio: Movimentando as Peças do Xadrez
    // Nível: Aventureiro
    // =========================================

    // ============================
    // 1 Movimento da TORRE (for)
    // ============================
    // A torre se move em linha reta — neste caso, 5 casas para a direita.
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Quebra de linha entre as peças

    // =============================
    // 2 Movimento do BISPO (while)
    // =============================
    // O bispo se move na diagonal — neste caso, 5 casas para cima e à direita.
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ===============================
    // 3 Movimento da RAINHA (do-while)
    // ===============================
    // A rainha pode se mover em qualquer direção.
    // Aqui, 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // =========================================
    // 4 Movimento do CAVALO (loops aninhados)
    // =========================================
    // O cavalo se move em formato de "L":
    // → Duas casas em uma direção (para baixo)
    // → Uma casa perpendicular (para a esquerda)
    //
    // Para representar isso, usaremos dois loops:
    // - Um loop for (obrigatório)
    // - Um loop while (interno)

    int casasBaixo = 2;    // movimento vertical
    int casasEsquerda = 1; // movimento horizontal

    printf("Movimento do Cavalo:\n");

    // Loop externo (for) → movimenta o cavalo para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        // Loop interno (while) → movimenta o cavalo para a esquerda
        int j = 1;
        while (j <= casasEsquerda && i == casasBaixo) {
            // o cavalo só move para o lado após descer as duas casas
            printf("Esquerda\n");
            j++;
        }
    }

    // =========================================
    // Fim da simulação
    // =========================================
    printf("\nSimulação concluída!\n");

    return 0;
}