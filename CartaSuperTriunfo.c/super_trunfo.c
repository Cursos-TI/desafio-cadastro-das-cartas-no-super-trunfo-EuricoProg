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

    printf("Cadastro da carta 1:\n");

    printf("estado: ");
    scanf("%c", &carta1.estado);

    printf("codigo da carta: ");
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



}
