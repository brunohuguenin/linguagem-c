#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 110
    Como gerar números aleatórios para preencher uma matriz?
*/

int main()
{
    int i , j, mat1[3][3] = {23,4,74,16,41,9,33,21,66}, mat2[3][3] = {1,18,33,4,75,10,91,77,9}, mat3[3][3];
    char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};


    srand(time(NULL));

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
           mat1[i][j] = rand();
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%5d ", mat1[i][j]);
        printf("\n");
    }

    return 0;
}
