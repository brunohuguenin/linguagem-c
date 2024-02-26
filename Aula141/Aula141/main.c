#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 141: Como dividir uma string com a função strtok()
// retorna um ponteiro

int main()
{
    char palavra[50] = {"Bom Dia Simpatia"};
    char *pt;

    pt = strtok(palavra, " "); // o caracter espaço é envolvido por apenas aspas simples
                              // a string espaço é envolvida por apas duplas

    while (pt) {
        printf("token: %s\n", pt);
        pt = strtok(NULL, " ");
    }

    return 0;
}
