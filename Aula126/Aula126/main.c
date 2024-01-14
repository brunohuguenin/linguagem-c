#include <stdio.h>
#include <stdlib.h>

/*
    Aula 126
    Dada uma matriz 4x4 fa�a um programa que diga se ela � um Quadrado
    M�gico ou n�o.

    - Soma de todas linhas, colunas, diagonal principal ou secund�ria
    s�o iguais.
*/


int main()
{
    // estrutura de dados?
    int l, c, linha, coluna, jogador, ganhou, jogadas, opcao;
    char jogo[3][3];

    printf("\n===== JOGO DA VELHA =====\n");

    do {
        jogador = 1;
        ganhou = 0;
        jogadas = 0;

        // como inicializar nossa estrutura de dados?
        for(l = 0; l < 3; l++) {
            for(c = 0; c < 3; c++) {
                jogo[l][c] = ' ';
            }
        }

        do {
            // imprimir jogo
            printf("\n\n\t 0   1   2\n\n");
            for(l = 0; l < 3; l++) {
                for(c = 0; c < 3; c++) {
                    if(c == 0)
                        printf("\t");
                    printf(" %c ", jogo[l][c]);
                    if(c < 2)
                        printf("|");
                    if(c == 2)
                        printf("  %d ", l);
                }
                if(l < 2)
                    printf("\n\t-----------");
                printf("\n");
            }

            printf("\n\n");
            // ler coordenadas
            do {
                printf("Digite a linha e a coluna que deseja jogar: ");
                scanf("%d%d", &linha, &coluna);
            } while( linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            // salvar coordenadas
            if(jogador == 1) {
                jogo[linha][coluna] = 'O';
                jogador++;
            } else {
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

            // algu�m ganhou por linha
            if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
               jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
                jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O') {
                printf("\nParab�ns! O jogador 1 venceu!\n");
                ganhou = 1;
            }

             if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
                jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X') {
                printf("\nParab�ns! O jogador 2 venceu!\n");
                ganhou = 1;
            }



            // algu�m ganhou por coluna
             if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
               jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
                jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O') {
                printf("\nParab�ns! O jogador 1 venceu!\n");
                ganhou = 1;
            }

             if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
                jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X') {
                printf("\nParab�ns! O jogador 2 venceu!\n");
                ganhou = 1;
            }

            // algu�m ganhou na diagonal principal
            if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O') {
                printf("\nParab�ns! O jogador 1 venceu!\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X') {
                printf("\nParab�ns! O jogador 2 venceu!\n");
                ganhou = 1;
            }


            // algu�m ganhou na diagonal secund�ria
            if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O')  {
                 printf("\nParab�ns! O jogador 1 venceu!\n");
                 ganhou = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X') {
                printf("\nParab�ns! O jogador 2 venceu!\n");
                ganhou = 1;
            }
        } while(ganhou == 0 && jogadas < 9);

        if(ganhou == 0)
            printf("\nO jogo finalizou sem ganhador\n");

        printf("\nDigite 1 para jogar novamente: ");
        scanf("%d", &opcao);
    }while(opcao == 1);


    return 0;
}
