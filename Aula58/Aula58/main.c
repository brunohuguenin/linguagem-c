#include <stdio.h>
#include <stdlib.h>

/*
    Aula 58
    Faça um programa que peça ao usuário um caracterer e diga se é uma vogal ou não

*/

int main()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E'
       || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O'
       || letra == 'u' || letra == 'U')
        printf("\nA letra digitada e uma VOGAL\n\n");
    else
        printf("\nA letra digitada e uma NAO E VOGAL\n\n");

    return 0;
}
