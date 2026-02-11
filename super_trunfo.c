#include <stdio.h>
#include <string.h>

int main() {
    char estado, codigo[10], nomeDaCidade[50];
    int numeroPontosTuristicos;
    unsigned long int populacao;
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
    scanf("%lu", &populacao);

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
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita);

    //calculo do "Super Poder" somando todos os atributos numéricos
    float superPoderCarta1 = (float)populacao + area + pib + numeroPontosTuristicos + PibPerCapita + (1.0f / densidadePopulacional);
    float superPoderCarta2 = (float)populacao + area + pib + numeroPontosTuristicos + PibPerCapita + (1.0f / densidadePopulacional);

    //imprime na tela qual carta venceu
    printf("Comparação de Atributos:\n");
    printf("População: %d\n", (populacao > populacao) ? 1 : 0);
    printf("Área: %d\n", (area > area) ? 1 : 0);
    printf("PIB: %d\n", (pib > pib) ? 1 : 0);
    printf("Número de Pontos Turísticos: %d\n", (numeroPontosTuristicos > numeroPontosTuristicos) ? 1 : 0);
    printf("PIB per Capita: %d\n", (PibPerCapita > PibPerCapita) ? 1 : 0);
    printf("Densidade Populacional: %d\n", (densidadePopulacional < densidadePopulacional) ? 1 : 0); // Menor densidade é melhor

    return 0;
}