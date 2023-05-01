#include <stdio.h>

#define texto "Dados do usuario."

int main(int argc, char const *argv[])

{
    
        printf("%s \n", texto);

        char nome [50];
        char endereco [50];
        int cep =0;
        int telefone =0;

    printf("Insira seu nome: \n");
    scanf("%s[^]nome", nome);
    fflush(stdin);

    printf("Insira seu endereco: \n");
    scanf("%s [^]endereco", endereco);
    fflush(stdin);

    printf("Insira seu cep: \n");
    scanf("%d",&cep);
    fflush(stdin);

    printf("Insira seu telefone: \n");
    scanf("%d", &telefone);
    fflush(stdin);

    printf("Dados do usuario: \n");
    printf("nome:%s \n", nome);
    printf("endereco:%s \n", endereco);
    printf("cep:%d \n", cep);
    printf("telefone:%d \n", telefone);

    return 0;
}
