#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int contador = 0;
    int numero[6];
    


    for (contador = 0; contador < 6; contador++)
    {

        printf("Digite os números:", (contador + 1));
        scanf("%d", &numero[contador]);
    }

    printf("Resultados:\n");

    for (contador = 0 ; contador >= 0; contador--)
    {
        if (numero[contador] % 2 == 0)
        {

            printf(" Número: %d\n", numero[contador]);
        }
    }

    return 0;
}