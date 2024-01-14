#include <stdio.h>
#include <stdlib.h>

/*
    Aula 127
    Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do
    do jogo e pergunte se deseja jogar novamente.
*/

int main()
{
    int jogo[3][3], opcaoL, opcaoC;
    char continuar = 's';



   printf("\t=== JOGO DA VELHA ===\n\n");
    printf("\t  0    1    2\n");
        printf("\n");
        printf("\t    |    |     0\n");
        printf("\t_ _ _ _ _ _ _  \n");
        printf("\t    |    |     1\n");
        printf("\t_ _ _ _ _ _ _  \n");
        printf("\t    |    |     2\n");

   do {
        printf("\t  0    1    2\n");
        printf("\n");
        printf("\t    |    |     0\n");
        printf("\t_ _ _ _ _ _ _  \n");
        printf("\t    |    |     1\n");
        printf("\t_ _ _ _ _ _ _  \n");
        printf("\t    |    |     2\n");


        printf("Continuar: %c");
        scanf("%c", &continuar);
   }while(continuar == 's');


    return 0;
}
