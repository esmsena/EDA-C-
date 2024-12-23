#include <stdio.h>
#include <stdlib.h>

/* Aula 10 Lendo vários valores*/

int main (){

    int num1, num2, num3;

    printf("Digite 3 valores inteiros; ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Valores lidos : %d, %d, e %d\n", num1, num2, num3);

    return 0;
}