# include <stdio.h>
# include <stdlib.h>

double calcularSoma(double vetor[], int n){
    if (n == 0 ) {
        return 0;
    }

        return vetor[n - 1] + calcularSoma (vetor, n-1);
    }


double calcularMedia(double vetor[], int n){
    if (n == 0 ) {
        return 0;
    }
    double soma = calcularSoma(vetor, n);
    
        return soma / n;
    }



int main(){

    int n;

    printf("Digite a quantidade de vetores:");
    scanf("%d", &n);

    if (n<=0) {
        printf("o numero de elementos deve ser maior que zero.\n");
        return 1;
    }

    double vetor[n];


    printf("Digite os %d elementos do vetore:\n",n);
    for (int i = 0; i < n; i++){
    printf("Elemento %d", i + 1);
    scanf("%lf", &vetor[i]);
    }

    double media = calcularMedia(vetor, n);
    printf("A média dos elementos é: %.2f\n", media);

    return 0;
}