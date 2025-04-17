#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Declaração de variáveis para armazenar dados de 2 cidades
    char estado[2][3], codigo[2][4], nomeCidade[2][50]; // Estado, código da cidade e nome da cidade
    int pontosturisticos[2]; // Número de pontos turísticos
    float area[2], PIB[2], densidadepopulacional[2], PIBpercapita[2], densidadepopulacionalinvertida[2], superpoder[2];
    int populacao[2]; // População total

    // Entrada de dados da primeira carta (cidade 1)
    printf("Carta 1\n");
    printf("Estado: "); scanf("%2s", estado[0]);
    printf("Código: "); scanf("%3s", codigo[0]);
    printf("Nome da Cidade: "); scanf("%49s", nomeCidade[0]);
    printf("Área (km²): "); scanf("%f", &area[0]);
    printf("População: "); scanf("%d", &populacao[0]);
    printf("PIB: "); scanf("%f", &PIB[0]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[0]);

    // Entrada de dados da segunda carta (cidade 2)
    printf("\nCarta 2\n");
    printf("Estado: "); scanf("%2s", estado[1]);
    printf("Código: "); scanf("%3s", codigo[1]);
    printf("Nome da Cidade: "); scanf("%49s", nomeCidade[1]);
    printf("Área (km²): "); scanf("%f", &area[1]);
    printf("População: "); scanf("%d", &populacao[1]);
    printf("PIB: "); scanf("%f", &PIB[1]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[1]);

    // Cálculo de indicadores para a cidade 1
    densidadepopulacional[0] = populacao[0] / area[0];
    PIBpercapita[0] = PIB[0] / populacao[0];
    densidadepopulacionalinvertida
