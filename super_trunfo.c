#include <stdio.h>
#include <string.h>

int main() {
    char estado, codigo[10], nomeDaCidade[50];
    int populacao, numeroPontosTuristicos;
    float area, pib;
   

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    getchar(); // Limpa o buffer do teclado antes de ler a string

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin);

    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = 0; // Remove o '\n'

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos);

    float densidadePopulacional = (float)populacao / area;
    float PibPerCapita = pib / populacao;


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita);

    return 0;
}