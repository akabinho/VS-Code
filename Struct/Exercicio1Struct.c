#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_livro {
    char nome[200];
    char autor[200];
    char categoria[200];
    float preco;
};

int main () {
    setlocale (LC_ALL, "portuguese");

    struct ficha_livro adicionar[3];
    int i;
    
    for (i = 0; i < 3; i++){
        printf("Digite o nome do %d� livro: ", i + 1);
        gets (adicionar[i].nome);
        fflush(stdin);
        printf("Digite o nome do autor do %d� livro: ", i + 1);
        gets (adicionar[i].autor);
        fflush(stdin);
        printf("Digite a categoria do %d� livro: ", i + 1);
        gets (adicionar[i].categoria);
        fflush(stdin);
        printf("Digite o pre�o do %d� livro: ", i + 1);
        scanf ("%f", &adicionar[i].preco);
        fflush(stdin);
    }
    
    system("cls || clear");
    printf ("\nExibindo resultados...\n\n");

    for (i = 0; i < 3; i++) {
        printf ("Nome do livro: %s\n", adicionar[i].nome);
        printf ("Autor do livro: %s\n", adicionar[i].autor);
        printf ("Categoria do livro: %s\n", adicionar[i].categoria);
        printf ("Pre�o do livro: %.2f\n", adicionar[i].preco);
        printf ("\n");
    }

    return 0;
}