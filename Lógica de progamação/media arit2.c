#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    float media;
    int soma=0;
    int contador=0;

    do{
        printf("Digite um numero:");
        scanf("%d", &numero);

        if(numero > 0){
            
            soma += numero;
            contador++;
        }
    }while (numero > 0);

    media = soma / contador;

    printf("Média: %.1f \n", media);

    return 0; 
    
}