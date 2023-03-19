#include <stdio.h>

#define Texto "Entrada de Dados."

int main(int argc, char const *argv[])
{
    printf("%s \n", Texto);
    int idade=0;
    float Altura=0.0;
    char nome[50]="";

    printf("Digite idade:\n");
    scanf("%d", &idade);

    printf("Digite altura: \n");
    scanf("%f", &Altura);

    printf("Digite nome: ;\n");
    scanf("%s", &nome);


    printf("Dados Informados Pelo Usuario: \n");
    printf("idade: %d\n" , idade);
    printf("altura: %.2f\n" , Altura);
    printf("nome: %s\n", nome);







    return 0;
}
