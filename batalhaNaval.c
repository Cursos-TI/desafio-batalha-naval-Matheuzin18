#include <stdio.h>

int main() {

    #define LINHAS 11 //Definir número de linhas
    #define COLUNAS 11 //Definir número de colunas

    int linha, coluna;
    char * tabuleiro[LINHAS][COLUNAS] =  //Criar tabuleiro vazio
    {
        {" ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"},
        {"1", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"2", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"3", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"4", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"5", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"6", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"7", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"8", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"9", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"10", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
    };


    // Posicionar navio vertical
    tabuleiro[5][1] = "3"; //A5
    tabuleiro[6][1] = "3"; //A6
    tabuleiro[7][1] = "3"; //A7

    // Posicionar navio horizontal
    tabuleiro[10][4] = "3"; //D10
    tabuleiro[10][5] = "3"; //E10
    tabuleiro[10][6] = "3"; //F10

    // Posicionar navio diagonal
    tabuleiro[9][7] = "3"; //G9
    tabuleiro[8][8] = "3"; //H8
    tabuleiro[7][9] = "3"; //I7

    //Posicionar navio diagonal
    tabuleiro[1][1] = "3"; //A1
    tabuleiro[2][2] = "3"; //B2
    tabuleiro[3][3] = "3"; //C3


    printf("       TABULEIRO BATALHA NAVAL:\n\n"); //Exibir mensagem antes do tabuleiro

    for (linha = 0; linha < LINHAS; linha++) 
    {
        for (coluna = 0; coluna < COLUNAS; coluna++) 
        {
            printf("%3s", tabuleiro[linha][coluna]); // Exibir as linhas e as colunas para formar o tabuleiro com um espaçamento
        }
        printf("\n\n");
    }


    return 0;
}
