#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
        Aula 138: Procurando caracteres em uma string com as funções strchr() e strrchr()

        strchr()   -> retorna a primeira ocorrência
        strrchr()  -> retorna a última ocorrência
*/

int main()
{

    char palavra[50] = {"abacate"};
    char *primOc, *ultiOc;

    primOc = strchr(palavra, 'a');

    printf("\n%c\n", *primOc);  // %c = inprimir um CARACTER.
                               // *primOc = asteristico na variável ponteiro para pegar o conteúdo armazenado nela

    printf("\n%c\n", *(primOc + 1)); // aritmética de ponteiro = pra pegar o conteúdo da POSIÇÃO seguinte 'a'
    printf("\n%c\n", *(primOc + 2));
    printf("\n%c\n", *(primOc + 3));
    printf("\n%c\n", *(primOc + 4));

    ultiOc = strrchr(palavra, 't');
    printf("\n%c\n", *ultiOc);
    printf("\n%c\n", *(ultiOc + 1));


    return 0;
}
