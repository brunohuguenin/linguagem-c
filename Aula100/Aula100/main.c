#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i;
   int num[5] = {3,4,8,23,69};
   char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

  for(i = 0; i < 5; i++){
    printf("%d", num[i]);
   }

   for(i=0; i<5; i++) {
    printf("\n%c", vogais[i]);
   }

    return 0;
}
