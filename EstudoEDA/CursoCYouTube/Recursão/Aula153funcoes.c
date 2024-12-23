# include <stdio.h>
# include <stdlib.h>

// Aula 153: Funções e procedimentos recursivos
// Exemplo: imprimir todos os números de n até 0

void imprimir(int x){
    if(x == 0)
        printf("%d\n", x);
    else {
       // printf("%d\n", x);
        imprimir(x - 1);
        printf("%d\n", x);
    }
}
int main (){

    int n; 

    printf ("Digite um valor maior que zero: ");
    scanf ("%d", &n);

   printf("Os valores são:\n");
    imprimir(n);

    return 0; 
}