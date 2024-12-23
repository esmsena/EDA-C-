# include <stdio.h>

int div (int m , int n){
    if (n == 0){
    printf ("ERRO: Divisão por zero!");
return -1;

}


int quociente = 0;

    while (m >= n) {

        m -= n; 
        quociente++;
    }
return quociente;
}


int main(){
    int m, n;

    printf("Digite o valor de m:");
    scanf("%d", &m);

        printf("Digite o valor de n:");
    scanf("%d", &n);

     int resultado = div(m,n);
    
    
    if (resultado != -1) {
    printf ("O valor do quociente de %d dividido por %d é =  %d\n ", m, n, resultado);
    }

    return 0;


}