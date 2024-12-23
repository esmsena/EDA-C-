#include <stdio.h>
#include <stdlib.h>

/*
                    Aula 16
                Operador sizeof

        sizeof x ou sizeof(int)
*/

 int main() {

        float x = 1.0;

        printf("Tamanho de um float na memoria %d bytes\n", sizeof x);
        printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

        // se 1 inteiro tem 4 bytes de memoria, então um inteiro tem 4 * 8 = 32 bits
        return 0;

 }