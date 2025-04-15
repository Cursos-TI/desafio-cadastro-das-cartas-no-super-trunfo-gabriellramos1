#include <stdio.h>

int main() {
    char estado[2][3], codigo[2][4], nomeCidade[2][50];
    int pontosturisticos[2];
    float area[2], PIB[2], densidadepopulacional[2], PIBpercapita[2], densidadepopulacionalinvertida[2], superpoder[2];
    int populacao[2];

    printf("Carta 1\n");
    printf("Estado: "); scanf("%2s", estado[0]);
    printf("Código: "); scanf("%3s", codigo[0]);
    printf("Nome da Cidade: "); scanf("%49s", nomeCidade[0]);
    printf("Área (km²): "); scanf("%f", &area[0]);
    printf("População: "); scanf("%d", &populacao[0]);
    printf("PIB: "); scanf("%f", &PIB[0]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[0]);

    printf("\nCarta 2\n");
    printf("Estado: "); scanf("%2s", estado[1]);
    printf("Código: "); scanf("%3s", codigo[1]);
    printf("Nome da Cidade: "); scanf("%49s", nomeCidade[1]);
    printf("Área (km²): "); scanf("%f", &area[1]);
    printf("População: "); scanf("%d", &populacao[1]);
    printf("PIB: "); scanf("%f", &PIB[1]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[1]);

    densidadepopulacional[0] = populacao[0] / area[0];
    PIBpercapita[0] = PIB[0] / populacao[0];
    densidadepopulacionalinvertida[0] = area[0] / populacao[0];
    superpoder[0] = populacao[0] + area[0] + PIB[0] + PIBpercapita[0];

    densidadepopulacional[1] = populacao[1] / area[1];
    PIBpercapita[1] = PIB[1] / populacao[1];
    densidadepopulacionalinvertida[1] = area[1] / populacao[1];
    superpoder[1] = populacao[1] + area[1] + PIB[1] + PIBpercapita[1];

    int atributo1, atributo2;
    float soma1 = 0, soma2 = 0;
    float valor1_1 = 0, valor1_2 = 0, valor2_1 = 0, valor2_2 = 0;

    do {
        printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per capita\n7 - Super Poder\n");
        scanf("%d", &atributo1);
        printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 7 || atributo2 < 1 || atributo2 > 7)
            printf("Atributos inválidos. Escolha dois diferentes entre 1 e 7.\n");

    } while (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 7 || atributo2 < 1 || atributo2 > 7);

    switch (atributo1) {
        case 1: valor1_1 = populacao[0]; valor1_2 = populacao[1]; break;
        case 2: valor1_1 = area[0]; valor1_2 = area[1]; break;
        case 3: valor1_1 = PIB[0]; valor1_2 = PIB[1]; break;
        case 4: valor1_1 = pontosturisticos[0]; valor1_2 = pontosturisticos[1]; break;
        case 5: valor1_1 = densidadepopulacional[0]; valor1_2 = densidadepopulacional[1]; break;
        case 6: valor1_1 = PIBpercapita[0]; valor1_2 = PIBpercapita[1]; break;
        case 7: valor1_1 = superpoder[0]; valor1_2 = superpoder[1]; break;
        default: printf("Atributo 1 inválido.\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor2_1 = populacao[0]; valor2_2 = populacao[1]; break;
        case 2: valor2_1 = area[0]; valor2_2 = area[1]; break;
        case 3: valor2_1 = PIB[0]; valor2_2 = PIB[1]; break;
        case 4: valor2_1 = pontosturisticos[0]; valor2_2 = pontosturisticos[1]; break;
        case 5: valor2_1 = densidadepopulacional[0]; valor2_2 = densidadepopulacional[1]; break;
        case 6: valor2_1 = PIBpercapita[0]; valor2_2 = PIBpercapita[1]; break;
        case 7: valor2_1 = superpoder[0]; valor2_2 = superpoder[1]; break;
        default: printf("Atributo 2 inválido.\n"); return 0;
    }

    printf("\nComparando as cartas com os atributos %d e %d:\n", atributo1, atributo2);
    printf("%s: %.2f e %.2f\n", nomeCidade[0], valor1_1, valor2_1);
    printf("%s: %.2f e %.2f\n", nomeCidade[1], valor1_2, valor2_2);

    valor1_1 = (atributo1 == 5) ? -valor1_1 : valor1_1;
    valor1_2 = (atributo1 == 5) ? -valor1_2 : valor1_2;
    valor2_1 = (atributo2 == 5) ? -valor2_1 : valor2_1;
    valor2_2 = (atributo2 == 5) ? -valor2_2 : valor2_2;

    soma1 = valor1_1 + valor2_1;
    soma2 = valor1_2 + valor2_2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade[0], soma1);
    printf("%s: %.2f\n", nomeCidade[1], soma2);

    if (soma1 > soma2)
        printf("\nResultado: %s venceu!\n", nomeCidade[0]);
    else if (soma2 > soma1)
        printf("\nResultado: %s venceu!\n", nomeCidade[1]);
    else
        printf("\nResultado: Empate!\n");

    return 0;
}
