#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char disciplina[3][200];
    float notas[3][2];
    int a, b;
    float media[3];
    int somaNota = 0;

    for (a = 0; a < 3; a++)
    {
        printf("\nDigite o nome da %d� disciplina: ", a + 1);
        gets(disciplina[a]);

        for (b = 0; b < 2; b++)
        {
            printf("Digite a %d� nota da disciplina: ", b + 1);
            scanf("%f", &notas[a][b]);

            somaNota += notas[a][b];
        }

        media[a] = somaNota / b;
        somaNota = 0;

        fflush(stdin);
    }

    system("CLS || CLEAR");

    printf("\nExibindo os dados informados... \n");

    for (a = 0; a < 3; a++)
    {
        printf("\nNome da %d� disciplina: %s \n", a + 1, disciplina[a]);

        for (b = 0; b < 2; b++)
        {
            printf("%d� nota: %.1f \n", b + 1, notas[a][b]);
        }
        printf("\nM�dia do %d� aluno:%.2f\n", a + 1, media[a]);
        if (media[a] >= 7)
        {
            printf("\nAprovado!!\n");
        }
        else if (media[a] >= 5 && media[a] < 7)
        {
            printf("\nRecupera��o!!\n");
        }
        if (media[a] < 5)
        {
            printf("\nReprovado!!\n");
        }
    }

    return 0;
}