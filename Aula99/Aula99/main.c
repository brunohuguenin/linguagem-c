#include <stdio.h>
#include <stdlib.h>

int main()
{

   int idade;
   char sexo;
   float n1;

   int num1[10];  // array terá 10 espaços
   int num2[] = {1,5,9,15,43}; // atribuir os valores após a criação da array
   int num3[5] = {4,5,7}; // vai atribuir 0 nos dois espaços que não foram especificados
   int num4[5] = {6,4,39,45,2}; // array completa com os 5 números
   int num5[5] = {0}; // array com 5 elementos 0

   char letras[100]; // array com capacidade de armazenar 100 caracteres
   char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // lembre-se que caracteres precisam ser envolvidos com aspas

   float notas[3] = {7.5,.3.9,8.79};

    return 0;
}
