#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[25];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[25];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;

    float densidade1, densidade2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;

    // --- Entrada dos dados da Carta 1 ---
    printf("Digite a inicial do estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a cidade da Carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da Carta 1: ");
    scanf("%d", &turismo1);

    // --- Entrada dos dados da Carta 2 ---
    printf("\nDigite a inicial do estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a cidade da Carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da Carta 2: ");
    scanf("%d", &turismo2);

    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    // Super Poder 
    superpoder1 = (float)populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);

   
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
