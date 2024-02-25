#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
        Aula 138: Procurando caracteres em uma string com as fun��es strchr() e strrchr()

        strchr()   -> retorna a primeira ocorr�ncia
        strrchr()  -> retorna a �ltima ocorr�ncia
*/

int main()
{

    char palavra[50] = {"abacate"};
    char *primOc, *ultiOc;

    primOc = strchr(palavra, 'a');

    printf("\n%c\n", *primOc);  // %c = inprimir um CARACTER.
                               // *primOc = asteristico na vari�vel ponteiro para pegar o conte�do armazenado nela

    printf("\n%c\n", *(primOc + 1)); // aritm�tica de ponteiro = pra pegar o conte�do da POSI��O seguinte 'a'
    printf("\n%c\n", *(primOc + 2));
    printf("\n%c\n", *(primOc + 3));
    printf("\n%c\n", *(primOc + 4));

    ultiOc = strrchr(palavra, 't');
    printf("\n%c\n", *ultiOc);
    printf("\n%c\n", *(ultiOc + 1));


    return 0;
}
