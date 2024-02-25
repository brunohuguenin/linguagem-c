#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
        Aula 136: Como comparar duas Strings com a função strcmp()
     0  -> as strings são iguais
    -1  -> a string 1 for menor que a string 2
     1  -> a string 1 for maior que a string 2
*/

int main()
{
    char palavra1[50] = ("hfx");
    char palavra2[50] = {"eqw"};


    printf("\n\nResultado: %d\n\n", strcasecmp(palavra1, palavra2));
    return 0;
}
