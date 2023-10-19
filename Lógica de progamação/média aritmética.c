#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i=0
    float soma=0,n;

    do{
        printf("Escolha numeros\n");
        scanf("%f", &n); i++;
    }
    while (n >= 0);{
        if(i==1)
        {
            printf("Valor lido invalido!");
            printf("media = 0");
        }
        else
        {
            i--;
            soma=soma-n;
            printf("foram lidos %d valores lidos\n", i);
            printf("a media = %f", soma/i);
        }
        
        getch();
}