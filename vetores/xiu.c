#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    char nome[200];
    char nomes[200] [5];
    int idades [5];
    int a;

    for (a = 0; a < 5; a++)
    {
        printf("Digite um nome:");
        gets(nomes[a]);

        printf("Digite uma idade:");
        scanf("%d", &idades[a]);

        system("CLS || CLEAR");

        fflush(stdin);
    }
    system("CLS || CLEAR");

    printf("\nExibindo resultados...\n");

    for (a = 0; a < 5; a++)
    {
        printf("\nNome: %s\n", nomes[a]);
        printf("\nIdade: %d \n", idades[a]);
    }

    return 0;
}