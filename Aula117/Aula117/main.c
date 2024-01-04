#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 117 exercicio 07
    Faça um programa para ordenar um vetor com 100 números inteiros.
    Imprima o vetor antes e depois a ordenação
*/

int main()
{
    int vetor[100], i, copia, j, troca, contador;

    srand(time(NULL));

    for(i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
    }

    printf("Antes da Ordenacao:\n");
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }

    // desse modo, o for vai rodar mesmo que o vetor já esteja ordenado
    // então ele não é eficiente
    /*for(j = 1; j <= 100; j++) {
        for(i = 0; i < 100 - 1; i++) {
            if(vetor[i] > vetor[i + 1]) {
                copia = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = copia;
            }
        }
    }
    */

    // por isso é melhor usar o do whilhe, pois eu garato que ele não irá rodar
    // caso o vetor ja esteja ordenado
    do {
            troca = 0;
            contador++;
            for(i = 0; i < 100 - 1; i++) {
                if(vetor[i] > vetor[i + 1]) {
                    copia = vetor[i];
                    vetor[i] = vetor[i + 1];
                    vetor[i + 1] = copia;
                    troca = 1;
                }
            }
    } while(troca > 0);

    printf("\n\nDepois da Ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }



    return 0;

}
