#include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Curitiba";
    int populacao1 = 54920106;
    float area1 = 2945.15f;
    float pib1 = 562.78f;
    int pontosTuristicos1 = 40;

    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Manaus";
    int populacao2 = 4296002;
    float area2 = 3610.65f;
    float pib2 = 345.86f;
    int pontosTuristicos2 = 50;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
