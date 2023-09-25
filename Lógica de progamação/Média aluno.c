#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float primeiraNota;
    float segundaNota;
    float media;
    
    
    printf("Digite sua primeira nota:");
    scanf("%f",&primeiraNota);

    printf("Digite sua segunda nota:");
    scanf("%f",&segundaNota);

    //Calculando a média.
    media = (primeiraNota + segundaNota) / 2;

    //exibindo dados para o usuário
    printf("Media: %.2f", media);

return 0;

} 
