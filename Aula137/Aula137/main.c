#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//        Aula 137: Como copiar Strings com a fun��o strcpy()
//  O primeiro par�metro da fun��o � o local de destino, o segundo, o que ser� copiado

int main()
{
    char copia[50];
    char palavra1[50] = ("bola");
    char palavra2[50] = {"abacate"};


    strcpy(copia, palavra2);

    printf("\n%s\n", copia);
    return 0;
}
