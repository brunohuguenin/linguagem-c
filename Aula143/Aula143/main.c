#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 143: Leia uma palavra e diga se ela é palindroma.
    ama
    arara
    asa
    osso
    radar
    reviver
    socos

    -> palindroma: palavra que pode-se ler da esquerda pra direita e vice-versa
*/
int main()
{
    char palavra[30], copia[30];
    int i, tam, iguais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // SEGUNDA SOLUÇÃO
    tam = strlen(palavra);
    tam--;

    i = 0;
    while(tam >= i) {
        if (palavra[i] != palavra[tam])
            iguais++;
        i++;
        tam--;
    }

    if (iguais == 0) {
        printf("\nE palindroma...\n");
    } else {
        printf("\nNao e palindroma..\n");
    }

    // PRIMEIRA SOLUÇÃO
    /*
    tam = strlen(palavra);
    for (i = 0; i < strlen(palavra); i++) {
        copia[i] = palavra[tam - 1];
        tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    printf("Original: %s\nCopia: %s\n", palavra, copia);
    for(i = 0; i < tam; i++) {
        if (palavra[i] == copia[i]) {
            iguais++;
        }
    }

    if (tam == iguais) {
        printf("\nE palindroma...\n");
    } else {
        printf("\nNao e palindroma..\n");
    }
    */

    return 0;
}
