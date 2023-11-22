#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char alunos[4][200];
    float notas[4][3];
    int a, b;
    float media[4];
    int somaNota = 0;

    for (a = 0; a < 4; a++)
    {
        printf("\nDigite o nome do %dº aluno: ", a + 1);
        gets(alunos[a]);

        for (b = 0; b < 3; b++)
        {
            printf("Digite a %dª do aluno: ", b + 1);
            scanf("%f", &notas[a][b]);

            somaNota += notas[a][b];
        }

        media[a] = somaNota / b;
        somaNota = 0;

        fflush(stdin);
    }

    system("CLS || CLEAR");

    printf("\nExibindo os dados informados... \n");

    for (a = 0; a < 4; a++)
    {
        printf("\nNome do %dº aluno: %s \n", a + 1, alunos[a]);

        for (b = 0; b < 3; b++)
        {
            printf("%dª nota: %.1f \n", b + 1, notas[a][b]);
        }
        printf("Média do %dº aluno:%.2f\n", a + 1, media[a]);
    }

    return 0;
}
