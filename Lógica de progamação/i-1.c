#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    //para i de 1 ate 10 passo 1 faca
    for (i= 1; i <= 10; i++) {
    //for (i= 1; i <= 10; i=i+2) {
    //for (i= 1; i <= 10; i=i+2) {
        printf("%d \n", i);
    }
    

    getchar(); //pausa no Windows e Linux
    return 0;
}

