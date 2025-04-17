#include <stdio.h>

int main() {
    int i, j;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\nMovimento do Cavalo:\n");
    for (i = 0; i < 1; i++) {
        j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}