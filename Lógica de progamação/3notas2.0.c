#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int j
    float nota;
    float soma;
    float media;
    char resultado [200];

    for (j = 1; j <= 3; j++){
        do{
            printf("Digite sua nota:");
            scanf("%f", &nota);
        } while(nota < 0 || nota > 10);
        
        soma += nota
      
    }
    
    media = soma / 3;

    printf("\nnota: %.1f \n", nota);

    if (media >= 7) {
        printf("Aprovado!");
    } else if (media >= 5) {
    printf("Recuperação!");
    } else {
      printf("Reprovado!");
    }
    
    return 0;
}    