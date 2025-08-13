#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado_carta1;
    char codigo_carta1[4]; // Ex: A01 (3 caracteres + terminador nulo)
    char nome_cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Declaração de variáveis para a Carta 2
    char estado_carta2;
    char codigo_carta2[4];
    char nome_cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    printf("--- Cadastro da Carta 1 ---\n");

    // Entrada de dados para a Carta 1
    printf("Digite o Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo_carta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade_carta1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao_carta1);

    printf("Digite a Area em km2: ");
    scanf(" %f", &area_carta1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f", &pib_carta1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos_carta1);
    
    // Limpa o buffer de entrada para evitar problemas com o próximo scanf
    while (getchar() != '\n');

    printf("\n--- Cadastro da Carta 2 ---\n");
    
    // Entrada de dados para a Carta 2
    printf("Digite o Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf(" %s", codigo_carta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade_carta2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao_carta2);

    printf("Digite a Area em km2: ");
    scanf(" %f", &area_carta2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f", &pib_carta2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos_carta2);
    
    // Limpa o buffer de entrada novamente
    while (getchar() != '\n');

    printf("\n--- Cartas Cadastradas ---\n");

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    return 0;
}