#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico = 1.5, ze = 1.1;
    int anos = 0;

   while(chico >= ze) {
    chico += 0.02;
    ze += 0.03;
    anos++;
    printf("Chico: %.2f   Ze: %.2f   Ano %d\n", chico, ze, anos);
   }
   //printf("%d anos", anos);

    return 0;
}
