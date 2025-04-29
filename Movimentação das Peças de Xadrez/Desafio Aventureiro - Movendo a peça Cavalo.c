#include <stdio.h>

int main() {

    int t = 0, b = 0;  // Variaveis das peças - t = torre | b = bispo
    int r; // r = rainha
    int c = 1; // c = cavalo

    printf("Bem-vindo ao Desafio Novato de Xadrez!\n");
    printf("\n");

    printf("A peça TORRE irá se mover agora:\n");
    printf("\n");

    while (t <= 5) {
    
        if (t == 0) {
            printf("A TORRE está na casa A1.\n");
        } else if (t == 1) {
            printf("A TORRE se moveu para FRENTE para a casa A2.\n");
        } else if (t == 2) {
            printf("A TORRE se moveu para FRENTE para a casa A3.\n");
        } else if (t == 3) {
            printf("A TORRE se moveu para FRENTE para a casa A4.\n");
        } else if (t == 4) {
            printf("A TORRE se moveu para FRENTE para a casa A5.\n");
        } else if (t == 5) {
            printf("A TORRE se moveu para FRENTE para a casa A6.\n");
        } 
        
        t++;
    }

    printf("\n Agora a peça BISPO irá se mover:\n");
    printf("\n");

    do {
        if (b == 0) {
        printf("O BISPO esta na casa B1 e se movera em diagonal.\n");
        } else if (b == 1) {
            printf("O BISPO se moveu para FRENTE e para DIREITA para a casa C3.\n");
        } else if (b == 2) {
            printf("O BISPO se moveu para FRENTE e para DIREITA para a casa D5.\n");
        } else if (b == 3) {
            printf("O BISPO se moveu para FRENTE e para DIREITA para a casa E7.\n");
        } else if (b == 4) {
            printf("O BISPO se moveu para FRENTE e para DIREITA para a casa F9.\n");
        } else if (b == 5) {
            printf("O BISPO se moveu para FRENTE e para DIREITA para a casa G11.\n");
        }
        b++;

    } while (b <= 5); 

    printf("\n Agora a peça RAINHA irá se mover:\n");
    printf("\n");

    for (r = 0; r < 8; r++)
    {
        if (r == 0) {
            printf("A RAINHA esta na casa H8 e se movera para a ESQUERDA.\n");
        } else if (r == 1) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H7.\n");
        } else if (r == 2) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H6.\n");
        } else if (r == 3) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H5.\n");
        } else if (r == 4) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H4.\n");
        } else if (r == 5) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H3.\n");
        } else if (r == 6) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H2.\n");
        } else if (r == 7) {
            printf("A RAINHA se moveu para a ESQUERDA para a casa H1.\n");
        }
    }
    
    printf("\n Agora a peça CAVALO irá se mover:\n");

    while (c <= 1) {
        for (c = 0; c <= 1; c++)
        {
            printf("O CAVALO se moveu para a casa de cima.\n");
        }

        printf("O CAVALO se moveu para a casa da direita.\n"); 

    }
    

    printf("Todas as peças se moveram com sucesso!\n");
    printf("Obrigado por jogar o Desafio Novato de Xadrez!\n");
    

    return 0;
}
