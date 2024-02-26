#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 147: Criando PROCEDIMENTO para imprimir uma string.

// tipo de retorno - identificador - parâmetros
int minhaStrLen(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') { // '\0' significa caractere de final de sting
        tam++;
    }
    return tam;
}

void imprimirString(char palavra[]) {
    int i = 0;

    while (palavra[i] != '\0') {
        printf(" - %c\n", palavra[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char vet[20] ={"Valeu, Natalina!"};

    printf("strllen: %d\n", strlen(vet));

    printf("minhaStrLen: %d\n", minhaStrLen(vet));

    imprimirString(vet);

    return 0;
}
