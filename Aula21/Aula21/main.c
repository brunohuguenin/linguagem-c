#include <stdio.h>
#include <stdlib.h>

/*
    Aula21
    tipo double
    %lf
*/

int main()
{
    float x = 3.1415;

    double y = 3.141554882658425252;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}
