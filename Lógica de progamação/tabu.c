#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num, i;
    i = 0;

    printf("Digite um numero:");
    scanf("%d", &num);

    for ( i = 10; i > 10; i++)
    {
        printf("\n%d X %d = %d", num, i, num*i);
        i++;
    }
    
    return 0;
}