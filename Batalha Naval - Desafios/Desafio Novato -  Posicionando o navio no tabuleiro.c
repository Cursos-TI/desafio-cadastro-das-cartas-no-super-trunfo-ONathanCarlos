#include <stdio.h>

int main() {
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char colunas[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char tabuleiro[10][10] = {0};  // Char para armazenar 'N' (navio) - Achei melhor armazenar a Letra N do que o número 3 pra melhorar a visualização
    int i, j;

    // Adicionando o navio N nos espaços F6, F7 e F8 para horizontal e E8 e D8 para vertical respectivamente
    int linha5 = 5; // F é a sexta linha (índice 5)
    int linha4 = 4; // E é a quinta linha (índice 4)
    int linha3 = 3; // F é a quarta linha (índice 3)
    int col6 = 5;  // '6' está na posição 5 do array colunas
    int col7 = 6;  // '7' está na posição 6
    int col8 = 7;  // '8' está na posição 7
    tabuleiro[linha5][col6] = 'N';
    tabuleiro[linha5][col7] = 'N';
    tabuleiro[linha5][col8] = 'N';
    tabuleiro[linha4][col8] = 'N';
    tabuleiro[linha3][col8] = 'N';

    printf("   "); // Cabeçalho do tabuleiro
    for (i = 0; i < 10; i++) { // Imprime as colunas
        printf("%c ", colunas[i]);
    }
    printf("\n");

    
    for (i = 0; i < 10; i++) { // Imprime as linhas
        printf("%c  ", linhas[i]);
        for (j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) { // Se o espaço estiver vazio, imprime 0
                printf("0 ");  
            } else {
                printf("%c ", tabuleiro[i][j]); // Imprime 'N' para navio
            }
        }
        printf("\n");
    }

    return 0;
}
// O código imprime um tabuleiro de batalha naval com navios posicionados.
// O tabuleiro é representado por um array 10x10, onde cada célula pode conter '0' (vazio) ou 'N' (navio).
// O navio é posicionado horizontalmente nas células F6, F7 e F8 e verticalmente nas células E8 e D8.
// O tabuleiro é impresso com letras (A-J) representando as linhas e números (1-0) representando as colunas.