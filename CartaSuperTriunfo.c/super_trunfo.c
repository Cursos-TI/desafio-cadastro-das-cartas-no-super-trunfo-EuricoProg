#include <stdio.h>

typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int PontosTuristicos;
} Carta;

int main(){
    Carta carta1;
    Carta carta2;

    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    scanf("%c", &carta1.estado);

    printf("Codigo da carta: ");
    scanf("%s", &carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões):");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.PontosTuristicos);


    printf("\nCadastro da Carta 2: \n");

    printf("Estado: ");
    scanf("%c", &carta2.estado);

    printf("Codigo da Carta: ");
    scanf("%s", &carta2.codigo);

    printf("Nome da cidade: ");
    scanf("%[^\n]", &carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área  (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &carta2.PontosTuristicos);

    // --- Exibição das cartas ---
    
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turisticos: %d\n", carta1.PontosTuristicos);

    printf("\n Carta 2 \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Numero pontos turisticos: %d\n", carta2.PontosTuristicos);

    return 0;
}
