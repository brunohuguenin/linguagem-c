#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 140: Convertendo uma string para maúsculo ou minúsculo com as funções
// strupr()
// strlwr()

int main()
{
    char palavra[50] = {"Bom Dia Simpatia"};

    printf("Antes da alteraçao: %s\n", palavra);
    strupr(palavra);

    printf("\nDepois da alteracao: %s\n", palavra);

    strlwr(palavra);
    printf("\nDepois da alteracao: %s\n", palavra);

    return 0;
}
