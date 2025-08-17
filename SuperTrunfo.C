#include <stdio.h>

#define TAM_CODIGO 4
#define TAM_NOME 50

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[TAM_CODIGO + 1]; // +1 para o caractere nulo '\0'
    char nomeCidade[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    //Calculos
    float densidade1 = (float) carta1.populacao/carta1.area;
    float pibpercapita1 = (carta1.pib * 1000000000)/carta1.populacao;

    float densidade2 = (float) carta2.populacao/carta2.area;
    float pibpercapita2 = (carta2.pib * 1000000000)/carta2.populacao;

    float superPoder1 = (float) carta1.populacao + carta1.area + (carta1.pib*1000000000) + carta1.pontosTuristicos + pibpercapita1 - densidade1;
    float superPoder2 = (float) carta2.populacao + carta2.area + (carta2.pib*1000000000) + carta2.pontosTuristicos + pibpercapita2 - densidade2;

    // Exibição das cartas
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f \n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f \n", superPoder2);

    //Comparação das Cartas
    printf("\n=== Compração das Cartas ===\n");
    printf("%s\n", carta1.populacao > carta2.populacao ? "População: Carta 1 venceu(1)": "População;: Carta 2 venceu(0)" );
    printf("%s\n", carta1.area > carta2.area ? "Área: Carta 1 venceu(1)": "Área: Carta 2 venceu(0)");
    printf("%s\n", carta1.pib > carta2.pib ? "PIB: Carta 1 venceu(1)": "PIB: Carta 2 venceu(0)");
    printf("%s\n", carta1.pontosTuristicos > carta2.pontosTuristicos ? "Pontos Turísticos: Carta 1 venceu(1)": "Pontos Turísticos: Carta 2 venceu(0)");
    printf("%s\n", densidade1 < densidade2 ? "Densidade Populacional: Carta 1 venceu(1)": "Densidade Populacional: Carta 2 venceu(0)");
    printf("%s\n", pibpercapita1 > pibpercapita2 ? "PIB per capita: Carta 1 venceu(1)": "PIB per capita: Carta 2 venceu(0)");
    printf("%s\n", superPoder1 > superPoder2 ? "Super Poder: Carta 1 venceu(1)" : "Super Poder: Carta 2 venceu(0)");

    return 0;
}