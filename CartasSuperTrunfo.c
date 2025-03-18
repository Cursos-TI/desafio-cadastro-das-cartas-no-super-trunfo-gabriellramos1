#include <stdio.h>

int main() {
    char estado[2][3], codigo[2][4], nomeCidade[2][50];
    int pontosturisticos[2], populacao[2];
    float area[2], PIB[2], densidadepopulacional[2], PIBpercapita[2], densidadepopulacionalinvertida[2], superpoder[2];
    int comparacao;

    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%2s", estado[0]);
    printf("Código: ");
    scanf("%3s", codigo[0]);
    printf("Nome da Cidade: ");
    scanf("%49s", nomeCidade[0]);
    printf("Área (km²): ");
    scanf("%f", &area[0]);
    printf("População: ");
    scanf("%d", &populacao[0]);
    printf("PIB: ");
    scanf("%f", &PIB[0]);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos[0]);

    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf("%2s", estado[1]);
    printf("Código: ");
    scanf("%3s", codigo[1]);
    printf("Nome da Cidade: ");
    scanf("%49s", nomeCidade[1]);
    printf("Área (km²): ");
    scanf("%f", &area[1]);
    printf("População: ");
    scanf("%d", &populacao[1]);
    printf("PIB: ");
    scanf("%f", &PIB[1]);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos[1]);

    densidadepopulacional[0] = populacao[0] / area[0];
    PIBpercapita[0] = PIB[0] / populacao[0];

    densidadepopulacional[1] = populacao[1] / area[1];
    PIBpercapita[1] = PIB[1] / populacao[1];

    densidadepopulacionalinvertida[0] = area[0] / populacao[0];
    densidadepopulacionalinvertida[1] = area[1] / populacao[1];

    superpoder[0] = populacao[0] + area[0] + PIB[0] + PIBpercapita[0];
    superpoder[1] = populacao[1] + area[1] + PIB[1] + PIBpercapita[1];

    comparacao = densidadepopulacionalinvertida[0] > densidadepopulacionalinvertida[1];

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): População = %d\n", nomeCidade[0], estado[0], populacao[0]);
    printf("Carta 2 - %s (%s): População = %d\n", nomeCidade[1], estado[1], populacao[1]);

    if (comparacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade[0]);
    } else if (populacao[1] > populacao[0]) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade[1]);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\nSuper Poder da Carta 1: %.2f\n", superpoder[0]);
    printf("Super Poder da Carta 2: %.2f\n", superpoder[1]);

    return 0;
}