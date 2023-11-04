#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
            Aula 30
    tabela ASCII e acentua��o
    1 byte (8 bits) ->  -128 at� 127;
    unsigned 1 byte ->  0 at� 255;

    9 � o caractere de tabula��o \t;
    10 � o caractere de nova linha \n (enter);
    65 � a letra A mai�scula;
    66 � a letra B mai�scula;
    90 � a letra Z mai�scula;


    lembre-se -> no cabe�alho : #include <locale.h>
    +
    1� = setelocale (LC_ALL, NULL); // padr�o da linguagem C
    2� = setelocale (LC_ALL, ""); // padr�o do sistema operacional
    1� = setelocale (LC_ALL, "Portuguese"); // padr�o pt-br
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\tCora��o carism�tico\n\n");
    return 0;
}
