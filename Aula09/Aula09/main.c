#include <stdio.h>
#include <stdlib.h>

/*
    Lendo Caracteres
    fun��o fgtec();
    fun��o expec�fica para utiliza��o de arquivos, entretanto
    essa fun��o pode tambem ser usada para
    fazer leitura do teclado
*/


int main()
{
    char letra;

    printf("Digite um caracterer: ");
    letra = fgetc(stdin);

    printf("Cracter lido: %c\n", letra);
    return 0;
}
