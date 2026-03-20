#include <stdio.h>
#include <string.h>

int main() {

    // CARTA 1
    char estado1, codigo1[10], nomeDaCidade1[50];
    int numeroPontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1;

    printf("Jogo de Trunfo - Cidades\n");

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

    int atributo1, atributo2;
    int resultado;

    // Nomes dos atributos para exibição
    char *nomesAtributos[] = {
        "População",
        "Área",
        "PIB",
        "Número de Pontos Turísticos",
        "PIB per Capita",
        "Densidade Populacional"
    };
    
    // Escolha dos atributos para comparação
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. PIB per Capita\n");
    printf("6. Densidade Populacional\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo
    do {
        printf("Escolha o segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Atributo já escolhido. Por favor, escolha um atributo diferente.\n");
        }
    } while (atributo2 == atributo1);

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    // Comparação dos atributos escolhidos
    switch (atributo1) {
    case 1:
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        resultado = (populacao1 > populacao2);
        break;
    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
        resultado = (area1 > area2);
        break;
    case 3:
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        resultado = (pib1 > pib2);
        break;
    case 4:
        valor1_c1 = numeroPontosTuristicos1;
        valor1_c2 = numeroPontosTuristicos2;
        resultado = (numeroPontosTuristicos1 > numeroPontosTuristicos2);
        break;
    case 5:
        valor1_c1 = pibPerCapita1;
        valor1_c2 = pibPerCapita2;
        resultado = (pibPerCapita1 > pibPerCapita2);
        break;
    case 6:
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        resultado = (densidade1 < densidade2);
        break;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
    case 1:
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        resultado = (populacao1 > populacao2);
        break;
    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
        resultado = (area1 > area2);
        break;
    case 3:
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        resultado = (pib1 > pib2);
        break;
    case 4:
        valor2_c1 = numeroPontosTuristicos1;
        valor2_c2 = numeroPontosTuristicos2;
        resultado = (numeroPontosTuristicos1 > numeroPontosTuristicos2);
        break;
    case 5:
        valor2_c1 = pibPerCapita1;
        valor2_c2 = pibPerCapita2;
        resultado = (pibPerCapita1 > pibPerCapita2);
        break;
    case 6:
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        resultado = (densidade1 < densidade2);
        break;

    default:
        printf("Opção inválida!\n");
        return 0;
    }

    // Exibição dos resultados
    printf("\nResultado:\n");
    printf("%s X %s\n", nomeDaCidade1, nomeDaCidade2);

    printf("\nAtributo 1 (%s): %.2f vs %.2f\n",
       nomesAtributos[atributo1 - 1], valor1_c1, valor1_c2);

    printf("Atributo 2 (%s): %.2f vs %.2f\n",
       nomesAtributos[atributo2 - 1], valor2_c1, valor2_c2);

    if (resultado)
        printf("\nCarta 1 (%s) venceu!\n", nomeDaCidade1);
    else
        printf("\nCarta 2 (%s) venceu!\n", nomeDaCidade2);


    return 0;
}