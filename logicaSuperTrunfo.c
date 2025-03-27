#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis para a primeira carta
    char estado1 = 'C';
    char codigo1[] = "C01";
    char nomeCidade1[] = "Fortaleza";
    unsigned long int populacao1 = 2700000;
    float area1 = 313.8;
    float pib1 = 67.02;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // Declaração e inicialização das variáveis para a segunda carta
    char estado2 = 'C';
    char codigo2[] = "C02";
    char nomeCidade2[] = "Sobral";
    unsigned long int populacao2 = 210000;
    float area2 = 2122.9;
    float pib2 = 6.57;
    int pontosTuristicos2 = 15;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    int opcao1, opcao2;
    
    // Menu para escolha dos atributos
    printf("Escolha dois atributos para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &opcao1);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &opcao2);

    // Função para comparar e determinar o vencedor
    void compararAtributo(int opcao, char nome1[], char nome2[], float valor1, float valor2) {
        printf("\nComparação de cartas:\n");
        printf("%s: %.2f\n", nome1, valor1);
        printf("%s: %.2f\n", nome2, valor2);
        printf("Resultado: %s venceu!\n", (opcao == 5) ? (valor1 < valor2 ? nome1 : nome2) : (valor1 > valor2 ? nome1 : nome2));
    }
    
    // Executar comparação para os dois atributos escolhidos
    float valores1[] = {populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1};
    float valores2[] = {populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2};
    
    compararAtributo(opcao1, nomeCidade1, nomeCidade2, valores1[opcao1 - 1], valores2[opcao1 - 1]);
    compararAtributo(opcao2, nomeCidade1, nomeCidade2, valores1[opcao2 - 1], valores2[opcao2 - 1]);
    
    return 0;
}