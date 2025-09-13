#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[5][5] = {0};

    // Navio horizontal (linha 1, colunas 0 a 2)
    int linha_horizontal = 1;
    for (int j = 0; j < 3; j++) {
        tabuleiro[linha_horizontal][j] = 1;
    }

    // Navio vertical (coluna 4, linhas 2 a 4)
    int coluna_vertical = 4;
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][coluna_vertical] = 1;
    }

    // Exibir coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
