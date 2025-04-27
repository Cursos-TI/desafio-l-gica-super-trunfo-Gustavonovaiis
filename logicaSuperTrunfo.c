#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    char estado1;              // Estado (A-H)
    char codigo1[4];           // Código da carta (ex: A01)
    char cidade1[20];          // Nome da cidade
    int populacao1;            // População
    float area1;               // Área em km²
    float pib1;                // PIB em bilhões de reais
    int pontosTuristicos1;     // Número de pontos turísticos

    char estado2;              // Estado (A-H)
    char codigo2[4];           // Código da carta (ex: B02)
    char cidade2[20];          // Nome da cidade
    int populacao2;            // População
    float area2;               // Área em km²
    float pib2;                // PIB em bilhões de reais
    int pontosTuristicos2;     // Número de pontos turísticos
    
    //  Bem- vindo as Instruções ass:Gustavo novais 
    // Escolha do atributo a ser comparado (definida diretamente no código)
    // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita
    int atributoEscolhido = 1; // Altere aqui para escolher o atributo (1 a 5)

    
    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    // Leitura dos dados da primeira carta
    printf("Digite os dados da PRIMEIRA carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da SEGUNDA carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação do atributo escolhido
    printf("\n=== Comparação de Cartas ===\n");

    if (atributoEscolhido == 1) { // Comparação pela POPULAÇÃO
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
        }
    } else if (atributoEscolhido == 2) { // Comparação por ÁREA
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, codigo1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, codigo2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
        }
    } else if (atributoEscolhido == 3) { // Comparação por PIB
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, codigo1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, codigo2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
        }
    } else if (atributoEscolhido == 4) { // Comparação por DENSIDADE POPULACIONAL
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, codigo1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, codigo2, densidade2);

        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
        }
    } else if (atributoEscolhido == 5) { // Comparação por PIB PER CAPITA
        printf("Comparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, codigo1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigo2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
        }
    }

    return 0;
}