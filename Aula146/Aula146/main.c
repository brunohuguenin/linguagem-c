#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 146: Criando uma função que retorna o tamanho de uma string

// tipo de retorno - identificador - parâmetros
int minhaStrLen(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') { // '\0' significa caractere de final de sting
        tam++;
    }
    return tam;
}

int main()
{
    char vet[20] ={"Ola"};

    printf("strllen: %d\n", strlen(vet));

    printf("minhaStrLen: %d\n", minhaStrLen(vet));

    return 0;
}
