#include <stdio.h>

int main() {
    // =========================================
    // Simulação de movimentação das peças de xadrez
    // Desafio: Movimentando as Peças do Xadrez
    // Nível: Novato
    // =========================================

    // ============================
    // 1️⃣ Movimento da TORRE (for)
    // ============================
    // A torre se move em linha reta — neste caso, 5 casas para a direita.
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Quebra de linha entre as peças

    // =============================
    // 2️⃣ Movimento do BISPO (while)
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
    // 3️⃣ Movimento da RAINHA (do-while)
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

    // ===============================
    // Fim da simulação
    // ===============================
    printf("\nSimulação concluída!\n");

    return 0;
}