#include <stdio.h> 
char menu(void) {

char opcaoDigitada;

printf("");

printf("**");

printf("");

printf("Numero* 1 - Colsulta");
printf("Numero* 2 - Alteracao");
printf("Numero* 3 - Inclusao");
printf("Numero* 4 - Exclusao");
printf("Numero* 5 - Sair");

printf("*5*");

printf("*opcao%d:",2);

opcaoDigitada=getchar();

return opcaoDigitada;

}

int main(int argc, char const *argv[])
{
    char opcao=menu();

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
    
    }


    return 0;
}



