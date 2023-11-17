#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[5][300];
    int idade[5];
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        printf("\nDigite seu nome:");
        scanf("%s", &nome[contador]);

        printf("Digite sua idade:");
        scanf("%d", &idade[contador]);
       
        fflush(stdin);    
    }

  for (contador = 0; contador < 5; contador++)
    {
        printf(" Nome:: %s\n", nome [contador]);
        printf("idade:: %d\n", idade [contador]);
    }
    return 0;
}