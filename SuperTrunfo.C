#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_CODIGO 4
#define TAM_NOME 50

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[2];
    char codigo[TAM_CODIGO + 1]; // +1 para o caractere nulo '\0'
    char nomeCidade[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

} Carta;

int main() {
    Carta carta1, carta2;
    int comparacao;

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %s", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);//utilizado para ler string com espaço

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
    scanf(" %s", &carta2.estado);

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
    float pibpercapita1 = (carta1.pib * 1000000000)/carta1.populacao;/* Multiplicado por um bilhão pois o o 
    texto pede um valor por bilhão então voltamos para a categoria decimal*/

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

    printf("\n==== Comparação das cartas ====\n");
    printf("1.Nome do pais\n");
    printf("2.Populção\n");
    printf("3. Área\n");
    printf("4.PIB\n");
    printf("5.Numeros de Pontos Turísticos\n");
    printf("6.Densidade demográfica\n");
    printf("Qual informção você deseja comparar?\n");
    scanf("%d", &comparacao);

    switch (comparacao){
    case 1:
        printf("Comparação do nome dos países\n");
        printf("Nome da cidade/País: %s\n",carta1.nomeCidade);
        printf("Nome da cidade/País: %s\n",carta2.nomeCidade);
    case 2:
        printf("Comparação das Populações\n");
        if (carta1.populacao > carta2.populacao){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.populacao);
            printf("Pontuação da segunda: %d\n", carta2.populacao);
            printf("Carta 1 venceu\n");
        }else if (carta1.populacao == carta2.populacao ){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.populacao);
            printf("Pontuação da segunda: %d\n", carta2.populacao);
            printf("Empate\n");
        }else{
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.populacao);
            printf("Pontuação da segunda: %d\n", carta2.populacao);
            printf("Carta 2 venceu\n");
        }
        break;
    case 3:
        printf("Comparação das Áreas\n");
        if (carta1.area > carta2.area){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.area);
            printf("Pontuação da segunda: %d\n", carta2.area);
            printf("Carta 1 venceu\n");
        }else if (carta1.area == carta2.area){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.area);
            printf("Pontuação da segunda: %d\n", carta2.area);
            printf("Empate\n");
        }else{
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.area);
            printf("Pontuação da segunda: %d\n", carta2.area);
            printf("Carta 2 venceu\n");
        }
        break;
    case 4:
        printf("Comparação dos PIBs\n");
        if (carta1.pib > carta2.pib){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pib);
            printf("Pontuação da segunda: %d\n", carta2.pib);
            printf("Carta 1 venceu\n");
        }else if (carta1.pib == carta2.pib){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pib);
            printf("Pontuação da segunda: %d\n", carta2.pib);
            printf("Empate\n");
        }else{
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pib);
            printf("Pontuação da segunda: %d\n", carta2.pib);
            printf("Carta 2 venceu\n");
        }
        break;
    case 5:
        printf("Comparação dos números de Pontos Turísticos\n");
        if (carta1.pontosTuristicos > carta2.pontosTuristicos){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pontosTuristicos);
            printf("Pontuação da segunda: %d\n", carta2.pontosTuristicos);
            printf("Carta 1 venceu\n");
        }else if (carta1.pontosTuristicos == carta2.pontosTuristicos){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pontosTuristicos);
            printf("Pontuação da segunda: %d\n", carta2.pontosTuristicos);
            printf("Empate\n");
        }else{
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", carta1.pontosTuristicos);
            printf("Pontuação da segunda: %d\n", carta2.pontosTuristicos);
            printf("Carta 2 venceu\n");
        }
        break;
    case 6:
        printf("Comparação das Populações\n");
        if (densidade1 < densidade2){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", densidade1);
            printf("Pontuação da segunda: %d\n", densidade2);
            printf("Carta 1 venceu\n");
        }else if (densidade1 == densidade2){
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", densidade1);
            printf("Pontuação da segunda: %d\n", densidade2);
            printf("Empate\n");
        }else{
            printf("Nome dos países:%s e %s\n", carta1.nomeCidade, carta2.nomeCidade);
            printf("Pontuação da primeira: %d\n", densidade1);
            printf("Pontuação da segunda: %d\n", densidade2);
            printf("Carta 2 venceu\n");
        }
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
