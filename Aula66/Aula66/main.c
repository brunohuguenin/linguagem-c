#include <stdio.h>
#include <stdlib.h>

/*
    Aula 66
    Estrutura de repeti��o -> for() incrementando um n�mero
    diferente de 1
*/

int main()
{
    int impares;

    for(impares = 1; impares <= 100; impares+=2) {
        printf("%d ", impares);

        /*if(impares % 2 != 0)
            printf("%d ", impares);
        */
    }


    return 0;
}
