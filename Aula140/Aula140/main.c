#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 140: Convertendo uma string para ma�sculo ou min�sculo com as fun��es
// strupr()
// strlwr()

int main()
{
    char palavra[50] = {"Bom Dia Simpatia"};

    printf("Antes da altera�ao: %s\n", palavra);
    strupr(palavra);

    printf("\nDepois da alteracao: %s\n", palavra);

    strlwr(palavra);
    printf("\nDepois da alteracao: %s\n", palavra);

    return 0;
}
