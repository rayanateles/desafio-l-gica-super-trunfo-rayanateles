#include <stdio.h>

int main() {
     
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2 
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Entrada Carta 1 - leitura
    printf("=== Carta 1 ===\n");

    printf("Estado (letra de 'A' a 'H'):");
    scanf(" %c", &estado1);

    printf("Código da carta (letra do estado + número de 01 a 04):\n");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade1);

    printf("Populaçao:");
    scanf("%d", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("quantidade de Pontos turisticos:\n");
    scanf("%d", &pontos1);

    printf("\n");
    
    // Entrada Carta 2 -  leitura

    printf("\n=== Carta 2 ===\n");

    printf("Estado:");
    scanf(" %c", &estado2);

    printf("Código da carta (letra do estado + número de 01 a 04):\n");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade2);

    printf("Populacao:");
    scanf("%d", &populacao2);

    printf("Area:");
    scanf("%f", &area2);
    
    printf("PIB:");
    scanf("%f", &pib2);

    printf("Pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Saída
    printf("\n --- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta (letra do estado + número de 01 a 04): %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d pontos turisticos\n", pontos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta (letra do estado + número de 01 a 04): %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d pontos turisticos\n", pontos2);

    return 0;
}