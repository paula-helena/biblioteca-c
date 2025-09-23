#include <stdio.h>

int main() {
    char titulo[50];
    char autor[50];
    int ano;
    
    printf("Titulo do livro: ");
    scanf(" %49[^\n]", titulo);

    printf("Autor do livro: ");
    scanf(" %49[^\n]", autor);

    printf("Ano da publicacao: ");
    scanf(" %d", &ano);

    printf("Livro Cadastrado: \n");
    printf("Titulo: %s\n", titulo);
    printf("Autor: %s\n", autor);
    printf("Ano: %d\n", ano);

    return 0;

}