#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Países\n");

// Carta 1
    printf("Carta_01\n");

    int populacao1 = 100000;
    float area1 = 100000.0;
    float PIB1 = 150000.0;
    int pontos1 = 25 ;
    float densidade1;
    float PIBpercapita1;

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    PIBpercapita1 = (float)PIB1 / populacao1;


    printf("\nDados da Carta 01:\n");

    printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n",
         populacao1, area1, PIB1, pontos1, densidade1, PIBpercapita1);

    // Carta 02
    printf("\nCarta_02\n");

    int populacao2 = 200000;
    float area2 = 200000.0;
    float PIB2 = 2200000.0;
    int pontos2 = 35;
    float densidade2;
    float PIBpercapita2;

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    PIBpercapita2 = (float)PIB2 / populacao2;

    printf("\nDados da Carta 02:\n");
    printf("População: %d\n Área: %.2f\n PIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n", 
           populacao2, area2, PIB2, pontos2,densidade2, PIBpercapita2);

    return 0;
}