#include <stdio.h>

int main() {
    // Movimentação da TORRE - 4 casas para a DIREITA, usando for
    int movimentosTorre = 4;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do BISPO - 5 casas na diagonal para CIMA e DIREITA, usando while
    int movimentosBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimentação da RAINHA - 3 casas para a ESQUERDA, usando do-while
    int movimentosRainha = 3;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}
