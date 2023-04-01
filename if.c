#include <stdio.h>


int main(int argc, char const *argv[])
{
  float m;  
  
  printf("Insira a nota: ");
scanf("%f", &m);

if (m >= 7.0)
{
    printf("Parabens, Aprovado!");
}

if (m < 7.0)
{
    printf("Reprovado ;( ");
}

   
   

    return 0;
}


