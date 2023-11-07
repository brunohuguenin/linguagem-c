#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, z;

    printf("Digite tres valores:\n");
    scanf("%d%d%d", &x,&y,&z);

    if(y < x  && x > z && z > y) {
        printf("O valor %d e o maior e o valor %d e o menor", x, y);
    }
    else if(y < x && x > z && y > z) {
        printf("O valor %d e o maior e o valor %d e o menor", x, z);
    }
    else if(x < z && z > y && y > x) {
        printf("O valor %d e o maior e o valor %d e o menor", z, x);
    }
    else if(y < z && z > x && x > y) {
        printf("O valor %d e o maior e o valor %d e o menor", z, y);
    }
    else if(x < y && y > z && x > z) {
        printf("O valor %d e o maior e o valor %d e o menor", y, z);
    }
     else if(z < y && y > x && z > x) {
        printf("O valor %d e o maior e o valor %d e o menor", y, x);
    }

    // Segunda versão

    int menor, maior;

    menor = x;
    maior = x;

    if(menor > y)
        menor = y;
    if(menor > z)
        menor = z;

    if(maior < y)
        maior = y;
    if(maior < z)
        maior = z;

    printf("\nO maior  valor digitado foi %d o menor valor foi %d\n\n", maior, menor);


    return 0;
}
