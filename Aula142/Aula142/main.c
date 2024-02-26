#include <stdio.h>
#include <stdlib.h>

// Aula 142: Matriz de Steings na Linguagem C

int main()
{
    char nomes[5][25];
    int l;

    for (l = 0; l < 5; l++) {
        printf("\nDigite o nome da posicao %d: ", l); // ao inserir strings em um vetor, pode-se armazenar somente nas linhas
        scanf("%25[^\n]", nomes[l]); // lembrando que para leitura de strings, nao se usa o &
        scanf("%c"); // foi usado para tirar o problema que dá ao pressionar o ENTER
        // caso optasse pela função 'fgets()', não seria necessário o segundo 'scanf()' para resolver o problema de leitura do ENTER
    }

    for (l = 0; l < 5; l++)
        printf("\nNome na posicao %d: %s", l, nomes[l]);
    return 0;
}
