#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero[5];
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        printf("Digite o nÃºmero");
        scanf("%d",& numero[contador]);

        if (numero[contador] < 0)
        {
            numero[contador]=0;
        }
    }


     for(contador=0;contador <5; contador ++){

        printf("Números:%d\n",numero [contador]);
     }

    return 0;
}