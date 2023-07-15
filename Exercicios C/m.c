#include <stdio.h> 

int main(int argc, char const *argv[])
{

int opcao;

printf("Escolha uma opcao: \n");

printf("Numero* 1 - Colsulta \n");

printf("Numero* 2 - Alteracao \n");

printf("Numero* 3 - Inclusao \n");

printf("Numero* 4 - Exclusao \n");

printf("Numero* 5 - Sair \n");
scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
    printf("consulta");
        break;

    case 2:
    printf("Alteraçao");
        break;

    case 3:
    printf("Inclusao");
        break;

    case 4:
    printf("Exclusao");
        break;

    case 5:
    printf("Sair");
        break;

    default:
        
     printf ("Opcao invalida");
    return 0;
    }

}
    




