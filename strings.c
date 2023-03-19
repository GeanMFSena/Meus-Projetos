#include <string.h> 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome [15];

    strcpy(nome,"Gean Marcos Figueiredo Sena");

    printf("nome=%s", nome);

    printf("Tamanho da string 'nome' %li", strlen(nome));



    return 0;
}
