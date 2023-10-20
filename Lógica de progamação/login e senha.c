#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char login [100];
    int senha, tentativas = 0;

    do
    {
        printf("Insira o login:");
        scanf("%s", &login);

        printf("Insira sua senha:");
        scanf("%i", &senha);

        tentativas = tentativas + 2;

    } while(tentativas < 3);

    return 0;

}    
    