#include <stdio.h>

#include <stdio.h>

int main() {
    char estado[2], codigo[2][4], nomeCidade[2][50];                    
    int pontosturisticos[2], opcao;
    float area[2], populacao[2], PIB[2], densidadepopulacional[2], PIBpercapita[2], densidadepopulacionalinvertida[2], superpoder[2];

    printf("Carta 1\n");
    printf("Estado: "); scanf(" %c", &estado[0]);
    printf("Código: "); scanf("%s", codigo[0]);
    printf("Nome da Cidade: "); scanf("%s", nomeCidade[0]);
    printf("População: "); scanf("%f", &populacao[0]);
    printf("Área: "); scanf("%f", &area[0]);
    printf("PIB: "); scanf("%f", &PIB[0]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[0]);

    printf("\nCarta 2\n");
    printf("Estado: "); scanf(" %c", &estado[1]);
    printf("Código: "); scanf("%s", codigo[1]);
    printf("Nome da Cidade: "); scanf("%s", nomeCidade[1]);
    printf("População: "); scanf("%f", &populacao[1]);
    printf("Área: "); scanf("%f", &area[1]);
    printf("PIB: "); scanf("%f", &PIB[1]);
    printf("Pontos Turísticos: "); scanf("%d", &pontosturisticos[1]);

    densidadepopulacional[0] = populacao[0] / area[0];
    PIBpercapita[0] = PIB[0] / populacao[0];
    densidadepopulacional[1] = populacao[1] / area[1];
    PIBpercapita[1] = PIB[1] / populacao[1];
    
    densidadepopulacionalinvertida[0] = area[0] / populacao[0];
    densidadepopulacionalinvertida[1] = area[1] / populacao[1];
    
    superpoder[0] = populacao[0] + area[0] + PIB[0] + PIBpercapita[0];
    superpoder[1] = populacao[1] + area[1] + PIB[1] + PIBpercapita[1];

    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per capita\n7 - Super Poder\n");
    scanf("%d", &opcao);
    
    printf("\nComparação:\n");
    if (opcao == 5) {
        printf("Densidade Populacional: %.2f vs %.2f\n", densidadepopulacional[0], densidadepopulacional[1]);
        if (densidadepopulacional[0] < densidadepopulacional[1])
            printf("Carta 1 venceu!\n");
        else if (densidadepopulacional[0] > densidadepopulacional[1])
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    } else {
        float valores[2];
        if (opcao == 1) { valores[0] = populacao[0]; valores[1] = populacao[1]; }
        else if (opcao == 2) { valores[0] = area[0]; valores[1] = area[1]; }
        else if (opcao == 3) { valores[0] = PIB[0]; valores[1] = PIB[1]; }
        else if (opcao == 4) { valores[0] = pontosturisticos[0]; valores[1] = pontosturisticos[1]; }
        else if (opcao == 6) { valores[0] = PIBpercapita[0]; valores[1] = PIBpercapita[1]; }
        else if (opcao == 7) { valores[0] = superpoder[0]; valores[1] = superpoder[1]; }
        else { printf("Opção inválida!\n"); return 0; }
        
        printf("%.2f vs %.2f\n", valores[0], valores[1]);
        if (valores[0] > valores[1])
            printf("Carta 1 venceu!\n");
        else if (valores[0] < valores[1])
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    return 0;
}