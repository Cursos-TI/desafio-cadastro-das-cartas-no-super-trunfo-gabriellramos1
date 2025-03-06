#include <stdio.h>

int main() {
    char estado[2], codigo[2][4], nomeCidade[2][50];                    
    int pontosturisticos[2];
    float area[2], populacao[2], PIB[2], densidadepopulacional[2], PIBpercapita[2];

    printf(" Carta 1 \n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado[0]);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo[0]);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade[0]);

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao[0]);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos[0]);

    printf("Digite a área da cidade: ");
    scanf("%f", &area[0]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[0]);

    printf("\n Carta 2 \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado[1]);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo[1]); 
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade[1]);

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao[1]);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos[1]);

    printf("Digite a área da cidade: ");
    scanf("%f", &area[1]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[1]);

    densidadepopulacional[0] = populacao[0] / area[0];
    PIBpercapita[0] = PIB[0] / populacao[0];

    densidadepopulacional[1] = populacao[1] / area[1];
    PIBpercapita[1] = PIB[1] / populacao[1];

    printf("\n Carta 1\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo[0]);
    printf("Cidade: %s\n", nomeCidade[0]);
    printf("População: %.2f\n", populacao[0]);
    printf("Área: %.2f km²\n", area[0]);
    printf("PIB: R$ %.2f\n", PIB[0]);
    printf("Pontos Turísticos: %d\n", pontosturisticos[0]);
    printf("Densidade Populacional: %.3f\n", densidadepopulacional[0]);
    printf("PIB per capita: %.3f\n", PIBpercapita[0]);

    printf("\n Carta 2\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo[1]);
    printf("Cidade: %s\n", nomeCidade[1]);
    printf("População: %.2f\n", populacao[1]);
    printf("Área: %.2f km²\n", area[1]);
    printf("PIB: R$ %.2f\n", PIB[1]);
    printf("Pontos Turísticos: %d\n", pontosturisticos[1]);
    printf("Densidade Populacional: %.3f\n", densidadepopulacional[1]);
    printf("PIB per capita: %.2f\n", PIBpercapita[1]);

    return 0;
}