#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 103
    Como gerar n�meros aleat�rios para preencher
    um vetor?
*/

int main()
{
    int i;
    int num2[5];

    srand(time(NULL));

    for(i = 0; i < 5; i++)
        num2[i] = rand();

    printf("\n\n");
    for(i = 0; i < 5; i++){
        printf("%d ", num2[i]);
    }


    printf("\n\n");
    return 0;
}
