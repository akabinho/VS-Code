#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int numeros[5];

    for (a = 0; a < 5 ; a++)
    {
        printf("Digite o %d� n�mero:", a + 1);
        scanf("%d", &numeros[a]);

        if (numeros[a] < 0)
        {
            numeros[a] = 0;
        }
        
    }

    system("CLS || CLEAR");

    for (a = 0; a < 5; a++)
    {
        printf("%d� n�mero: %d \n", a + 1, numeros[a]);
    }
    
    return 0;
}