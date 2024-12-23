// além das funções getchar(), getc() e putchar(), a biblioteca stdio.h fornece a função getc() que lê um caractere de um arquivo e a função scanf, existge uma outro comando de leitura chamada fgetc


#include <stdio.h>
#include <stdlib.h>

/* Aula 9- Lendo caracter função fgetc() */

int main () {

    char letra;

    printf (" Digite um caracter:");
    letra = fgetc(stdin); // lê um caracter do teclado

    printf (" O caracter lido: %c\n", letra);

    return 0;
}