#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 135: Concatenando duas strrigs com a função strcat()

int main()
{
    char palavras [50] = {"Oi. "};
    char complemento[50] = {"Seja bem-vindo(a) ao meu programa!"};

    printf("%s\n", strcat(palavras, complemento));
    return 0;
}
