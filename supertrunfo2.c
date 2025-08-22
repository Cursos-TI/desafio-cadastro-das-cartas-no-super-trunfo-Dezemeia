#include <stdio.h>

int main() {
    char estado;
    char codigo[4];       
    char cidade[25];
    int populacao;
    float area;
    float pib;
    int turismo;
    float densidade;
    float percapita;


printf("Digite a inicial do estado \n");
scanf("%s", &estado);

printf("Digite o codigo \n");
scanf("%s", codigo);

printf("Digite a cidade \n");
scanf("%s", cidade);

printf("Digite a populacao \n");
scanf("%d", &populacao);

printf("Digite a area \n");
scanf("%f", &area);

printf("Digite o Pib \n");
scanf("%f", &pib);

printf("Quantos pontos turisticos \n");
scanf("%d", &turismo);

densidade = populacao/area;
percapita = pib/populacao;


   
    printf("\n--- Dados cadastrados ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("Pib Percapita:%.2f\n",percapita);


    return 0;
}


