# include <stdio.h>
# include <stdlib.h>

// Aula 154: Fazer uma função que calcula e retorna o farorial de n.

int fatorial(int n){
    if (n == 0|| n == 1)
        return 1;
    else{
        // 5 * 4! 
        return n * fatorial (n - 1);
    }
}

int main (){

    int n; 

    printf ("Digite um valor maior que zero: ");
    scanf ("%d", &n);

   printf("O valor é :\n");

    printf("Fatorial de %d: %d\n", n, fatorial(n));

    return 0; 
}