#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Aventureiro com Menu Interativo

int main() {
    // variáveis da primeira carta
    char codigoCidade1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // variáveis da segunda carta
    char codigoCidade2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    int opcao;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigoCidade1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Correção aqui
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", codigoCidade2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);  // Correção aqui
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\nCartas Cadastradas:\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigoCidade1);
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigoCidade2);
    printf("Nome: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Menu de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparação:\n");

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2)
                printf("%s venceu com maior população (%d habitantes).\n", nomeCidade1, populacao1);
            else if (populacao2 > populacao1)
                printf("%s venceu com maior população (%d habitantes).\n", nomeCidade2, populacao2);
            else
                printf("Empate na população (%d habitantes).\n", populacao1);
            break;
        case 2:
            if (area1 > area2)
                printf("%s venceu com maior área (%.2f km2).\n", nomeCidade1, area1);
            else if (area2 > area1)
                printf("%s venceu com maior área (%.2f km2).\n", nomeCidade2, area2);
            else
                printf("Empate na área (%.2f km2).\n", area1);
            break;
        case 3:
            if (pib1 > pib2)
                printf("%s venceu com maior PIB (%.2f bilhões).\n", nomeCidade1, pib1);
            else if (pib2 > pib1)
                printf("%s venceu com maior PIB (%.2f bilhões).\n", nomeCidade2, pib2);
            else
                printf("Empate no PIB (%.2f bilhões).\n", pib1);
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("%s venceu com mais pontos turísticos (%d).\n", nomeCidade1, pontosTuristicos1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("%s venceu com mais pontos turísticos (%d).\n", nomeCidade2, pontosTuristicos2);
            else
                printf("Empate no número de pontos turísticos (%d).\n", pontosTuristicos1);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
