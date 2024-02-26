#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Aula 150: Função que retorna a soma de uma coluna da matriz

int tam = 5;
void imprimirMatriz(int vet[5][5]) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
                printf("%3d ", vet[i][j]);
        }
        printf("\n");
    }
}

// Função para somar um LINHA a matriz
int somarLinhaMatriz(int matriz[5][5], int linha) {
    int coluna, soma = 0;
    for (coluna = 0; coluna < tam; coluna++) {
        soma += matriz[linha][coluna];
    }
    return soma;
}

// Função para somar um COLUNA a matriz
int somarColunaMatriz(int matriz[5][5], int coluna) {
    int linha, soma = 0;
    for (linha = 0; linha < tam; linha++) {
        soma += matriz[linha][coluna];

    }
    return soma;
}

int main()
{
    srand(time(NULL));

    int mat[5][5];
    int l, c, tam = 5;

    for (l = 0; l < tam; l++) {
        for (c = 0; c < tam; c++) {
            mat[l][c] = rand() % 100;
        }
    }
    imprimirMatriz(mat);

    int linha, coluna;
    printf("\nEscolha o numero da LINHA que deseje ser somado os valores: ");
    scanf("%d", &linha);

    printf("\nEscolha o numero da COLUNA que deseje ser somado os valores: ");
    scanf("%d", &coluna);

    printf("\nA soma dos valores da linha %d e: %d\n",linha, somarLinhaMatriz(mat, linha));
    printf("\nA soma dos valores da linha %d e: %d\n",linha, somarColunaMatriz(mat, coluna));

    return 0;
}
