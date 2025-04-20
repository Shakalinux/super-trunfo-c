#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    /*ultima versão*/
    
    char estado1[] = "SP";
    char cidade1[] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1500.0;
    float pib1 = 2200.0;
    int pontosTuristicos1 = 100;
    float densidade1 = populacao1 / area1;

    
    char estado2[] = "RJ";
    char cidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.0;
    float pib2 = 1500.0;
    int pontosTuristicos2 = 80;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    int resultado1 = 0, resultado2 = 0;

    printf("=== Super Trunfo de Países - Comparação com Dois Atributos ===\n");

   
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite o número da sua primeira escolha: ");
    scanf("%d", &escolha1);

    if (escolha1 == 0) {
        printf("Obrigado por jogar!\n");
        return 0;
    } else if (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida para o primeiro atributo.\n");
        return 1;
    }

    
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite o número da sua segunda escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 == 0) {
        printf("Obrigado por jogar!\n");
        return 0;
    } else if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida para o segundo atributo ou igual ao primeiro.\n");
        return 1;
    }

    printf("\n=== Resultados da Comparação ===\n");
    printf("País 1: %s (%s)\n", cidade1, estado1);
    printf("País 2: %s (%s)\n", cidade2, estado2);
    printf("Atributos escolhidos: ");

   
    switch (escolha1) {
        case 1:
            printf("População, ");
            printf("População - %s: %lu, %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1 : 0;
            break;
        case 2: 
            printf("Área, ");
            printf("Área - %s: %.2f, %s: %.2f\n", cidade1, area1, cidade2, area2);
            resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? -1 : 0;
            break;
        case 3:
            printf("PIB, ");
            printf("PIB - %s: %.2f, %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1 : 0;
            break;
        case 4: 
            printf("Pontos Turísticos, ");
            printf("Pontos Turísticos - %s: %d, %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? -1 : 0;
            break;
        case 5: 
            printf("Densidade Demográfica, ");
            printf("Densidade Demográfica - %s: %.2f, %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            resultado1 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? -1 : 0; 
            break;
    }


    switch (escolha2) {
        case 1: 
            printf("População\n");
            printf("População - %s: %lu, %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1 : 0;
            break;
        case 2: 
            printf("Área\n");
            printf("Área - %s: %.2f, %s: %.2f\n", cidade1, area1, cidade2, area2);
            resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? -1 : 0;
            break;
        case 3: 
            printf("PIB\n");
            printf("PIB - %s: %.2f, %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1 : 0;
            break;
        case 4:
            printf("Pontos Turísticos\n");
            printf("Pontos Turísticos - %s: %d, %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? -1 : 0;
            break;
        case 5: 
            printf("Densidade Demográfica\n");
            printf("Densidade Demográfica - %s: %.2f, %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            resultado2 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? -1 : 0; 
            break;
    }

    
    int soma1 = resultado1 + resultado2;
    int soma2 = -resultado1 - resultado2;

    printf("\n=== Resultado Final ===\n");
    printf("Soma dos atributos - %s: %d, %s: %d\n", cidade1, soma1, cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}