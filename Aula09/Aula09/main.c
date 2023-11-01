#include <stdio.h>
#include <stdlib.h>

/*
    Lendo Caracteres
    função fgtec();
    função expecífica para utilização de arquivos, entretanto
    essa função pode tambem ser usada para
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
