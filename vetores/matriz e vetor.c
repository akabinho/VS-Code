#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,("portuguese");
     
    char alunos [2] [200];
    float notas [2] [3];
    int a,b;

    for (a = 0; a < 2; a++)
    {
        printf("Digite o nome do aluno:");
        gets(alunos[a]);

        for (b = 0; b < 3; b++)
        {
            printf("Digite a %dª do aluno:", b + 1);
            scanf("%f", &notas[a][b]);
        }
        
    }
    
    for (a = 0; a < 2; a++)
    {
        printf("Nomde do %dº aluno:%s\n", a + 1, alunos[a])
        for (b = 0; b < 3; b++)
        {
            /* code */
        }
        
    }
    

}