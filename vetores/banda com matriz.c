#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char banda[3][500];
    char integrantes[3][5][500];
    int a, b;

    for (a = 0; a < 3; a++)
    {
        printf("Digte o nome da %d� banda:", a + 1);
        gets(banda[a]);

        for (b = 0; b < 5; b++)
        {
            printf("\nDigite o nome do %d� integrante da banda:", b + 1);
            gets(integrantes[a][b]);
        }

        system("CLS || CLEAR");

    }

    system("CLS || CLEAR");
    printf("Exibindo os resultados...\n\n");

    for (a = 0; a < 3; a++)
    {
        printf("Exibindo o nome da %d� banda: %s\n\n", a + 1, banda[a]);

        for (b = 0; b < 5; b++)
        {
            printf("Nome do %d� integrante da banda: %s\n\n", b + 1, integrantes[a][b]);
        }
    }

    return 0;
}