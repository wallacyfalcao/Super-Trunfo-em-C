#include <stdio.h>
#include <string.h>

int main() {

    // CARTA 1
    char estado1, codigo1[10], nomeDaCidade1[50];
    int numeroPontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1;

    printf("Digite os dados da CARTA 1\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;


    // CARTA 2
    char estado2, codigo2[10], nomeDaCidade2[50];
    int numeroPontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2;

    printf("\nDigite os dados da CARTA 2\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;


    // IMPRIME CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // IMPRIME CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // COMPARAÇÃO (1 = carta 1 vence, 0 = carta 2 vence)
    printf("\nComparação de Atributos:\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Número de Pontos Turísticos: %d\n", (numeroPontosTuristicos1 > numeroPontosTuristicos2));
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));

    return 0;
}
