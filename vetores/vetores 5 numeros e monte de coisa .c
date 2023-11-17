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
        printf("Digite 5 números:"[contador]);
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

    printf("quantidade de números pares: %d\n", par);
    printf("quantidade de números ímpares: %d\n", impar);

    return 0;
}