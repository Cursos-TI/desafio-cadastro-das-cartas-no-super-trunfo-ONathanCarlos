#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 5

// Função para desenhar a habilidade em forma de cone
void DesenharCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int origem_linha, int origem_coluna) {
    int i, j;
    for (i = 0; i < 3; i++) {  // altura do cone
        for (j = -i; j <= i; j++) { // largura do cone: 2*i+1
            int linha = origem_linha + i;
            int coluna = origem_coluna + j;
            if (linha >= 0 && linha < TAMANHO_TABULEIRO && coluna >= 0 && coluna < TAMANHO_TABULEIRO && tabuleiro[linha][coluna] == 0) {
                tabuleiro[linha][coluna] = 5;
            }
        }
    }
}

// Função para desenhar a habilidade em forma de cruz
void DesenharCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int origem_linha, int origem_coluna) {
    int i;
    
    // Eixo vertical - B5, C5, D5
    for (i = -1; i <= 1; i++) {
        int linha = origem_linha + i;
        if (linha >= 0 && linha < TAMANHO_TABULEIRO && tabuleiro[linha][origem_coluna] == 0) {
            tabuleiro[linha][origem_coluna] = 5;
        }
    }

    // Eixo horizontal - C3, C4, C5, C6, C7
    for (i = -2; i <= 2; i++) {
        int coluna = origem_coluna + i;
        if (coluna >= 0 && coluna < TAMANHO_TABULEIRO && tabuleiro[origem_linha][coluna] == 0) {
            tabuleiro[origem_linha][coluna] = 5;
        }
    }
}


// Função para desenhar a habilidade em forma de octaedro (losango)
void DesenharOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int origem_linha, int origem_coluna) {
    int i, j;
    for (i = -1; i <= 1; i++) { // altura do octaedro - 3 linhas - C5, D5, E5
        for (j = -1; j <= 1; j++) { // largura do octaedro - 3 colunas - C5, C6, C4
            if ((i == 0 && (j == 0 || j == 1 || j == -1)) ||
                (j == 0 && (i == 1 || i == -1))) {
                int linha = origem_linha + i;
                int coluna = origem_coluna + j;
                if (linha >= 0 && linha < TAMANHO_TABULEIRO &&
                    coluna >= 0 && coluna < TAMANHO_TABULEIRO &&
                    tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }
}


int main() {
    char linhas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char colunas[10] = {'1','2','3','4','5','6','7','8','9','0'};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    int i, j;

    // Navio 1 (horizontal) – A1, A2, A3
    int l1 = 0, c1 = 0;
    for (i = 0; i < 3 && c1 + i < TAMANHO_TABULEIRO; i++) {
        tabuleiro[l1][c1 + i] = 3;
    }

    // Navio 2 (vertical) – A10, B10, C10
    int l2 = 0, c2 = 9;
    for (i = 0; i < 3 && l2 + i < TAMANHO_TABULEIRO; i++) {
        if (tabuleiro[l2 + i][c2] == 0) {
            tabuleiro[l2 + i][c2] = 3;
        }
    }

    // Navio 3 (diagonal principal) – G3, H2, I1
    int l3 = 6, c3 = 2;
    for (i = 0; i < 3 && l3 + i < TAMANHO_TABULEIRO && c3 - i >= 0; i++) {
        if (tabuleiro[l3 + i][c3 - i] == 0) {
            tabuleiro[l3 + i][c3 - i] = 3;
        }
    }


    // Navio 4 (diagonal secundária) – J10, I9, H8
    int l4 = 9, c4 = 9;
    for (i = 0; i < 3 && l4 - i >= 0 && c4 - i >= 0; i++) {
        if (tabuleiro[l4 - i][c4 - i] == 0) {
            tabuleiro[l4 - i][c4 - i] = 3;
        }
    }

    // Habilidade representado por 5 em cada forma geométrica solicitada
    DesenharCruz(tabuleiro, 2, 4);       // Cruz em C5 (Meio da cruz como referência)
    DesenharOctaedro(tabuleiro, 4, 7);   // Octaedro em E8 (Meio do octaedro como referencia)
    DesenharCone(tabuleiro, 5, 4);       // Cone em F5 (Topo do cone como referencia)

    // Exibição do tabuleiro
    printf("   ");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%c  ", linhas[i]);
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 ");
            } else if (tabuleiro[i][j] == 3) {
                printf("3 ");
            } else if (tabuleiro[i][j] == 5) {
                printf("5 ");
            }
        }
        printf("\n");
    }

    return 0;
}
