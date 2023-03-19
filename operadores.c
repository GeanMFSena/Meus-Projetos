#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, soma, sub, divi, multi;

    printf("Digite um numero: %d \n");
    scanf("%d: \n", &a);

    printf("Digite um segundo numero: %d \n");
    scanf("%d: \n", &b);

    soma  = a + b;
    sub   = a - b;
    divi  = a / b;
    multi = a * b;

    printf("Resultados: \n");
    printf("soma: %d \n", soma);
    printf("sub: %d \n", sub);
    printf("divi: %d \n", divi);
    printf("multi: %d \n", multi);








    return 0;
}
