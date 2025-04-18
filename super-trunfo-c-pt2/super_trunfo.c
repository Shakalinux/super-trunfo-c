#include <stdio.h>
#include <locale.h>
/*
    Código encontra-se simplificado, por questões de informações disponíveis na plataforma, desse modo, o cadastro das cartas jão estão  realizados no codigo

    Simplificações para o nível básico

    Neste nível, você irá comparar apenas duas cartas pré-definidas no código.
     
    A escolha do atributo para comparação será feita diretamente no código, não haverá interação com o usuário para escolher o atributo.
     
    Não é necessário implementar menus interativos neste nível. Foque na lógica de comparação utilizando if e if-else.

*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1[] = "SP", codigo1[] = "A01", cidade1[] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1500.0, pib1 = 2200.0;
    int pontosTuristicos1 = 100;
    float densidade1, pibPerCapita1;

    char estado2[] = "RJ", codigo2[] = "B01", cidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.0, pib2 = 1500.0;
    int pontosTuristicos2 = 80;
    float densidade2, pibPerCapita2;

   
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

   
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("Carta 1 - %s %s:\n", cidade1, estado1);
    printf("População: %2.f \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s %s:\n", cidade2, estado2);
    printf("População: %2.f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

   
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s %s: População: %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s %s: População: %lu\n", cidade2, estado2, populacao2);

   
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
