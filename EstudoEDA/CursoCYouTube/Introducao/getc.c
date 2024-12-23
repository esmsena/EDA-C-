// além das funções getchar() e putchar(), a biblioteca stdio.h fornece a função getc() que lê um caractere de um arquivo e a função scanf, existge uma outro comando de leitura chamada getc


#include <stdio.h>
#include <stdlib.h>

/* Aula 8- Lendo caracter função getc() */

int main () {

    char letra;

    printf (" Digite um caracter:");
    letra = getc(stdin); // lê um caracter do teclado

    printf (" O caracter lido: %c\n", letra);

    return 0;
}