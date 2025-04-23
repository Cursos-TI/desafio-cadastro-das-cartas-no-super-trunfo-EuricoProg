#include <stdio.h>

typedef struct {
    char estado;
    char codigo[5];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int PontosTuristicos;
} Carta;

int main(){
    Carta carta1;
    Carta carta2;

    printf("Cadastro da carta 1:\n");

    printf("estado (A-H): ");
    scanf("%c", &carta1.estado);

    
}
