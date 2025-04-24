#include <stdio.h>
#include <windows.h>
#define CASAS_TABULEIRO 8 // Define o tamanho do tabuleiro (8x8)

/*
 * linha é equivalente à letra da coluna ('a', 'b', 'c', ...).
 * coluna é equivalente ao número da linha ('1', '2', '3', ...).
 * Assim, a notação do tabuleiro segue o padrão: A1, B2, C3 e assim por diante.
 */
int linha; // Variável global para armazenar a linha atual da peça
int coluna; // Variável global para armazenar a coluna atual da peça


/*
 * Função para imprimir o tabuleiro de xadrez no console.
 * Recebe uma matriz 2D de caracteres representando o tabuleiro.
 */
void tabuleiroJogo(char tabuleiro[CASAS_TABULEIRO][CASAS_TABULEIRO]){
    printf("  a b c d e f g h\n");
    printf("  ---------------\n");
    for(int i = 0; i < CASAS_TABULEIRO; i++){
        printf("%d |", i + 1);
        for(int x = 0; x < CASAS_TABULEIRO; x++){
            printf("%c ", tabuleiro[i][x]);
        }
        printf("|\n");
    }
    printf("  ---------------\n");
}



int main(){
   
    SetConsoleOutputCP(CP_UTF8);
    int opcao; 
    char tabuleiro[CASAS_TABULEIRO][CASAS_TABULEIRO]; 

    // Inicializa o tabuleiro com casas vazias ('-').
    for (int i = 0; i < CASAS_TABULEIRO; i++) {
        for (int j = 0; j < CASAS_TABULEIRO; j++) {
            tabuleiro[i][j] = '-';
        }
    }


    printf("Escolha a peça para mover:\n");
    printf("1 - Torre | 5 casas para a direita (posição inicial a1)\n");
    printf("2 - Bispo | 5 casas para cima e à direita (posição inicial c1)\n");
    printf("3 - Rainha| 8 casas para a esquerda (posição inicial d1)\n");
    printf("4 - Cavalo| 2 casas para baixo e 1 para a esquerda (posição inicial b2)\n");
    printf("Digite o número da peça: ");
    scanf("%d", &opcao);


    switch(opcao){
        case 1: 
            printf("Movimento da Torre:\n");
            linha = 0; // Define a linha inicial da Torre (correspondente a '1')
            coluna = 0; // Define a coluna inicial da Torre (correspondente a 'a')
            // Indo para a posição inicial a1
            // Atribuindo a Torre ('T') na sua posição inicial no tabuleiro.
            tabuleiro[linha][coluna] = 'T';
            for(int i = 0; i < 5; i++){
                // Verifica se o movimento para a direita está dentro dos limites do tabuleiro.
                if(coluna + 1 < CASAS_TABULEIRO){
                    // Marca a casa anterior como vazia após o movimento.
                    tabuleiro[linha][coluna] = '.';
                    coluna++; // Incrementa a coluna para mover a Torre para a direita.
                    tabuleiro[linha][coluna] = 'T'; // Coloca a Torre na nova posição.
                    // Chama a função para imprimir o tabuleiro a cada movimento.
                    tabuleiroJogo(tabuleiro);
                    printf("Direita\n");
                    Sleep(500); // Pausa para visualizar o movimento.
                }

            }
            printf("\nMovimento da Torre concluído:\n");
            tabuleiroJogo(tabuleiro);
        break;

        case 2: 
            printf("Movimento do Bispo:\n");
            linha = 0; // Define a linha inicial do Bispo (correspondente a '1')
            coluna = 2; // Define a coluna inicial do Bispo (correspondente a 'c')
            // Indo para a posição inicial c1
            tabuleiro[linha][coluna] = 'B';

            for (int i = 0; i < 5; i++) {
                // Verifica se o movimento para cima e para a direita está dentro dos limites.
                if (linha - 1 >= 0 && coluna + 1 < CASAS_TABULEIRO) {
                    tabuleiro[linha][coluna] = '.'; // Marca a casa anterior.
                    linha--; // Move para cima.
                    coluna++; // Move para a direita.
                    tabuleiro[linha][coluna] = 'B'; // Coloca o Bispo na nova posição.
                    tabuleiroJogo(tabuleiro);
                    printf("Cima, Direita\n");
                    Sleep(500);
                }
            }
            printf("\nMovimento do Bispo concluído:\n");
            tabuleiroJogo(tabuleiro);
        break;

        case 3: 
            printf("Movimento da Rainha:\n");
            linha = 0; // Define a linha inicial da Rainha (correspondente a '1')
            coluna = 3; // Define a coluna inicial da Rainha (correspondente a 'd')
            // Indo para a posição inicial d1
            tabuleiro[linha][coluna] = 'Q';

            for (int i = 0; i < 8; i++) {
                // Verifica se o movimento para a esquerda está dentro dos limites.
                if (coluna - 1 >= 0) {
                    tabuleiro[linha][coluna] = '.'; // Marca a casa anterior.
                    coluna--; // Move para a esquerda.
                    tabuleiro[linha][coluna] = 'Q'; // Coloca a Rainha na nova posição.
                    tabuleiroJogo(tabuleiro);
                    printf("Esquerda\n");
                    Sleep(500);
                }
            }
            printf("\nMovimento da Rainha concluído:\n");
            tabuleiroJogo(tabuleiro);
        break;

        case 4: 
            printf("Movimento do Cavalo:\n");
            linha = 1; // Define a linha inicial do Cavalo (correspondente a '2')
            coluna = 1; // Define a coluna inicial do Cavalo (correspondente a 'b')
            // Indo para a posição inicial b2
            tabuleiro[linha][coluna] = 'C';

            // Simula o movimento específico do cavalo: 2 casas para baixo e 1 para a esquerda.
            if (linha + 2 < CASAS_TABULEIRO) {
                // Marca a casa anterior.
                tabuleiro[linha][coluna] = '.'; 
                // Move duas casas para baixo.
                linha += 2; 
                if (coluna - 1 >= 0) {
                    // Move uma casa para a esquerda.
                    coluna--; 
                    // Coloca o Cavalo na nova posição.
                    tabuleiro[linha][coluna] = 'C'; 
                    printf("Baixo\n");
                    printf("Baixo\n");
                    printf("Esquerda\n");
                    tabuleiroJogo(tabuleiro);
                    Sleep(5000);
                } else {
                    printf("Movimento inválido para a esquerda.\n");
                }
            } else {
                printf("Movimento inválido para baixo.\n");
            }
            printf("\nMovimento do Cavalo concluído:\n");
            tabuleiroJogo(tabuleiro);
        break;

        default: 
            printf("Opção inválida.\n");
        break;
    }
    return 0;
}