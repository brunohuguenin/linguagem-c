#include <stdio.h>
#include <stdlib.h>

//  Aula 132: Como identificar o final de uma string?

int main()
{
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"}
    ;
    printf("Digite seu nome: ");
    //scanf("%20[^\n]", palavras);
    //gets(palavras);
    fgets(palavras, 50, stdin);

    int i = 0;
    while (palavras[i] != '\0') {
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }
    printf("\n");
    return 0;
}
