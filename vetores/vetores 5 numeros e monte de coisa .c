#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contador;
    int numero[5];
    int somapar = 0;
    int somaimpar = 0;
    int par;
    int impar;

    for (contador = 0; contador < 5; contador++)
    {
        printf("Digite 5 n�meros:"[contador]);
        scanf("%d", &numero[contador]);
    }

    for (contador = 0; contador < 5; contador++)
    {
        if (numero % 2 == 0)
        {
            par++;
            somapar += numero;
        }
        else
        {
            impar++;
            somaimpar += numero;
        }
    }

    printf("quantidade de n�meros pares: %d\n", par);
    printf("quantidade de n�meros �mpares: %d\n", impar);

    return 0;
}