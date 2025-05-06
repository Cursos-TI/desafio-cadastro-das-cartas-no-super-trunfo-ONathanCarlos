#include <stdio.h>

// Função recursiva para o movimento da TORRE para frente
void moverTorre(int casa) {
    if (casa > 5) return; // Condição de parada: a torre só vai até a casa A6

    if (casa == 0)
        printf("A TORRE está na casa A1.\n");
    else
        printf("A TORRE se moveu para FRENTE para a casa A%d.\n", casa + 1);

    moverTorre(casa + 1); // Chamada recursiva para a próxima casa
}

// Função recursiva com loops aninhados para o BISPO
void moverBispo(int vertical, int horizontal) {
    if (vertical > 5 || horizontal > 11) return; // Limites definidos para o movimento

    if (vertical == 0)
        printf("O BISPO esta na casa B1 e se movera em diagonal.\n");
    else
        printf("O BISPO se moveu para FRENTE e para DIREITA para a casa %c%d.\n",
               'B' + vertical + horizontal / 10, 1 + vertical * 2);

    // Loops aninhados para representar o movimento diagonal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            // apenas simula a estrutura de loops aninhados
        }
    }

    moverBispo(vertical + 1, horizontal + 2); // Movimento diagonal
}

// Função recursiva para a RAINHA se movendo para a esquerda
void moverRainha(int casa) {
    if (casa > 7) return; // A rainha vai da casa H8 até H1

    if (casa == 0)
        printf("A RAINHA esta na casa H8 e se movera para a ESQUERDA.\n");
    else
        printf("A RAINHA se moveu para a ESQUERDA para a casa H%d.\n", 8 - casa);

    moverRainha(casa + 1); // Chamada recursiva para a próxima casa
}

int main() {
    int cavalo = 1; // peça CAVALO

    printf("Bem-vindo ao Desafio Mestre de Xadrez!\n\n");

    printf("A peça TORRE irá se mover agora:\n\n");
    moverTorre(0);

    printf("\nAgora a peça BISPO irá se mover:\n\n");
    moverBispo(0, 0);

    printf("\nAgora a peça RAINHA irá se mover:\n\n");
    moverRainha(0);

    printf("\nAgora a peça CAVALO irá se mover:\n\n");

    while (cavalo <= 1) {
        for (cavalo = 0; cavalo <= 1; cavalo++) {
            printf("O CAVALO se moveu para a casa de cima.\n");
        }
        printf("O CAVALO se moveu para a casa da direita.\n");
    }

    printf("\nTodas as peças se moveram com sucesso!\n");
    printf("Obrigado por jogar o Desafio Mestre de Xadrez!\n");

    return 0;
}
