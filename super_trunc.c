#include <stdio.h>

int main() {
    char estado, segundoEstado, codigo[5], segundoCodigo[5], cidade[50], segundaCidade[50];
    unsigned long int populacao, segundaPopulacao;
    int pontos, segundoPontos;
    float area, segundaArea, pib, segundoPib;
    float desensidade, segundaDesensidade;
    float pibPercap, segundoPibPercap;
    float superPoder1, superPoder2;

    printf("Informe os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos);


    desensidade = (float)populacao / area;
    pibPercap = (pib * 1000000000) / (float)populacao;

    superPoder1 = (float)populacao + area + (pib * 1000000000) + pontos + pibPercap + (1 / desensidade);

    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &segundoEstado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", segundoCodigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", segundaCidade);

    printf("População: ");
    scanf("%lu", &segundaPopulacao);

    printf("Área (em km²): ");
    scanf("%f", &segundaArea);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &segundoPib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &segundoPontos);

    
    segundaDesensidade = (float)segundaPopulacao / segundaArea;
    segundoPibPercap = (segundoPib * 1000000000) / (float)segundaPopulacao;
    superPoder2 = (float)segundaPopulacao + segundaArea + (segundoPib * 1000000000) + segundoPontos + segundoPibPercap + (1 / segundaDesensidade);


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", desensidade);
    printf("PIB per Capita: %.2f reais\n", pibPercap);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", segundoEstado);
    printf("Código: %s\n", segundoCodigo);
    printf("Nome da Cidade: %s\n", segundaCidade);
    printf("População: %lu\n", segundaPopulacao);
    printf("Área: %.2f km²\n", segundaArea);
    printf("PIB: %.2f bilhões de reais\n", segundoPib);
    printf("Pontos Turísticos: %d\n", segundoPontos);
    printf("Densidade Populacional: %.2f hab/km²\n", segundaDesensidade);
    printf("PIB per Capita: %.2f reais\n", segundoPibPercap);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > segundaPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", area > segundaArea);
    printf("PIB: Carta 1 venceu (%d)\n", pib > segundoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos > segundoPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", desensidade < segundaDesensidade); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercap > segundoPibPercap);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
