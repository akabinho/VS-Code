#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char* mostrarSituacao(float media){
    char resultado[200];

    if (media >= 7){
        strcpy(resultado, "Aprovado!");
    } else {
        strcpy(resultado, "Reprovado!");
    }

    return resultado;
}
float verificarMedia(float notas[]){
    int i;
    float somaNotas = 0, media;
}

int main()
{
    setlocale(LC_ALL, "");

    float notas[3], media;
    int i;

    for(i = 0; i < 3; i++){
        printf("Digite a dº nota:", i + 1);
        scanf("%f", &notas[i]);
    }

    media = verificarMedia(notas);

    printf("Média: %.2f \n", media);
    printf("Resultado: %s \n", mostrarSituacao(media));

    return 0;
}