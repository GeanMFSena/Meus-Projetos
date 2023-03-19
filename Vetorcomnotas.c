#include <stdio.h>


int main(int argc, char const *argv[])
{

float notas[4] = {4.5, 5.0, 4.0, 6.0};

float soma = 0;

for (int indice=0; indice<4; indice++)

{

soma = soma + notas[indice];

}

printf("A media das notas e: %.2f", (soma/4));


    return 0;
}

