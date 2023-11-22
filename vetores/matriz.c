#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int numeros[2][2];
    int a,b;

    printf("Digite os elementos do vetor: \n");

    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("Elemento da linha %d coluna %d:", a + 1, b + 1);
            scanf("%d", &numeros[a][b]);
        }
        
    }

    system("CLS || CLEAR");

    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("Elemento da linha %d coluna %d: %d\n", a + 1, b + 1, numeros[a][b]);
        }
        
    }
    

    return 0;
    
}