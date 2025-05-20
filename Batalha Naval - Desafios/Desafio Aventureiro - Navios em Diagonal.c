#include <stdio.h>

int main() {
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char colunas[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char tabuleiro[10][10] = {0};  // Matriz 10x10 iniciada com 0 (água)
    int i, j;

    //Os Navios estão representados por 3 e a água por 0

    // Navio 1 (horizontal) – F6, F7, F8
    int l1 = 5, c1 = 5;
    if (c1 + 2 < 10) {
        for (i = 0; i < 3; i++) {
            tabuleiro[l1][c1 + i] = '3';
        }
    }

    // Navio 2 (vertical) – D8, E8, F8
    int l2 = 3, c2 = 7;
    if (l2 + 2 < 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[l2 + i][c2] == 0) {
                tabuleiro[l2 + i][c2] = '3';
            }
        }
    }

    // Navio 3 (diagonal principal) – G1, H2, I3
    int l3 = 6, c3 = 0;
    if (l3 + 2 < 10 && c3 + 2 < 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[l3 + i][c3 + i] == 0) {
            tabuleiro[l3 + i][c3 + i] = '3';
            }
        }
    }

    // Navio 4 (diagonal secundária) – G10, H9, I8
    int l4 = 6, c4 = 9;
    if (l4 + 2 < 10 && c4 - 2 >= 0) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[l4 + i][c4 - i] == 0) {
                tabuleiro[l4 + i][c4 - i] = '3';
            }
        }
    }

    // Tabuleiro
    
    printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%c  ", linhas[i]);
        for (j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 ");
            } else {
                printf("%c ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
