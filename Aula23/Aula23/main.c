#include <stdio.h>
#include <stdlib.h>

/*
    Aula 23
    caracteres de escape
    Quebra de linha       -> \n
    Tabulação             -> \t
    Aspas duplas          -> \"
    Aspas simples         -> \'
    Contrabarra           -> \\
*/

int main()
{
    printf("Isto sera impresso na tela");

    printf("\n\nIsto sera impresso na tela -- quebra de linha\n\n");

    printf("\n\n\tIsto sera impresso na tela -- tabulacao\n\n");

    printf("Isto sera impresso na tela: \"AQUI\" -- aspas duplas\n\n");

    printf("Isto sera impresso na tela: \\ -- contrabarra\n\n");
    return 0;
}
