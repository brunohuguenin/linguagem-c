#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//        Aula 137: Como copiar Strings com a função strcpy()
//  O primeiro parâmetro da função é o local de destino, o segundo, o que será copiado

int main()
{
    char copia[50];
    char palavra1[50] = ("bola");
    char palavra2[50] = {"abacate"};


    strcpy(copia, palavra2);

    printf("\n%s\n", copia);
    return 0;
}
