#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int numeros[10];
    int numerosNegativos = 0;
    int somaNumeros = 0;

    for (a = 0; a < 10; a++)
    {
        printf("Digite o %d� n�mero:", a + 1);
        scanf("%d", &numeros[a]);

        if (numeros[a] >= 0)
        {
            somaNumeros += numeros[a];
        }
        else
        {
            numerosNegativos++;
        }
    }
    
    system("CLS || CLEAR");

    printf("Soma n�meros: %d \n", somaNumeros);
    printf("N�meros negativos: %d \n", numerosNegativos);

    return 0;
}