#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    struct ficha_livro
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
    };
    
    int main()
{
    setlocale(LC_ALL, "portuguese");


    struct ficha_livro livro[3];
    int i;

    for (i = 0; i < 3; i++){
        printf("\nDigite o nome do livro:");
        gets(livro[i].nome);

        printf("Digite o nome do autor:");
        gets(livro[i].autor);

        printf("Digite o nome da categoria do livro:");
        gets(livro[i].categoria);

        printf("Digite o preço do livro:");
        scanf("%f", &livro[i].preco);

        fflush(stdin);
    }

    printf("\nExibindo dados dos livros.. \n");

    for(i = 0; i < 3; i++){
        printf("\nNome do livro: %s \n", livro[i].nome);
        printf("\nAutor do livro: %s \n", livro[i].autor);
        printf("\nCategoria do livro: %s \n", livro[i].categoria);
        printf("\nPreço do livro: %.2f \n", livro[i].preco);
    }

    return 0;
}