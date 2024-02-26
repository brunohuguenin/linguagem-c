#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Aula 139: Localizando uma substring com a função strstr();
//  strstr() -> retorna um ponteiro

int main()
{
    char palavra[50] = {"Bom dia, simpatia!"};
    char str[] = {"Valeu"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);

    if (ponteiro) {
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro+1), *(ponteiro+2));
    } else {
        printf("Ponteiro Nulo!\n");
    }
    return 0;
}
