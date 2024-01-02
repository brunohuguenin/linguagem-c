#include <stdio.h>
#include <stdlib.h>

/*
    Aula 109
    Como alterar o conteúdo de uma matriz
*/

int main()
{
    int i , j, mat1[3][3] = {23,4,74,16,41,9,33,21,66}, mat2[3][3] = {1,18,33,4,75,10,91,77,9}, mat3[3][3];
    char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
           mat3[i][j] = mat1[i][j] + mat2[i][j] ;
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%2d ", mat3[i][j]);
        printf("\n");
    }

    return 0;
}
