#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a,b = 6;
    int numeros[6];

    for (a = 0; a < b; a++)
    {

        do
        {
            printf("\nDigite o %d� n�mero:", a + 1);
            scanf("%d", &numeros[a]);

            if (numeros[a] % 2 != 0 || numeros[a] < 0)
            {
                printf("\nN�mero inv�lido! Digite um n�mero positivo e par\n");
        
            }

        } while (numeros[a] % 2 != 0 || numeros[a] < 0);
    }

    system("CLS || CLEAR");

    for (a = --b; a >= 0; a--)
    {
        printf("%d \n", numeros[a]);
    }

    return 0;
}