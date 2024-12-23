# include <stdio.h>
# include <stdlib.h>

int AckermannRecursivo (int m, int n){
    if (m == 0)
        return n + 1;
    if ( m > 0 && n == 0) {
        return AckermannRecursivo(m - 1, 1);
    } 
    if ( m > 0 && n > 0){
    return AckermannRecursivo(m - 1, AckermannRecursivo(m, n - 1));
    }
    return 0;
}

int main (){
    int m, n;

    printf("Digite um valor para m:");
    scanf("%d", &m);

    printf("Digite um valor para n:");
    scanf("%d", &n);

    printf("O valor de Ackermann dos valores m= %d e n= %d é: %d\n" ,m , n, AckermannRecursivo(m, n));

    return 0;
}