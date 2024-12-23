#include <stdio.h>

int main () {
    char operador;
    float num1 , num2, resultado;
    char continuar;

    do {

        printf ("escolha o operador (+, -, /, ou *): ");
        scanf (" %c", &operador);

        printf ("escolha o primeiro número: ");
        scanf (" %f", &num1);

        printf ("escolha o segundo número: ");
        scanf (" %f", &num2);

        // Calculo 

        switch (operador){

            case '+':
            resultado = num1 + num2;
            printf (" %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

            case '-':
            resultado = num1 - num2;
            printf ("%.2f - %.2f = %.2f\n", num1 , num2, resultado);
            break;

            case '/':
            resultado = num1 / num2;
            printf (" %.2f / %.2f = %.2f ", num1, num2, resultado);
            break;

             case '*':
            resultado = num1 * num2;
            printf (" %.2f * %.2f = %.2f ", num1, num2, resultado);
            break;

            default :
            printf ("operador inválido. \n " );
            break;
        }


        printf ("Deseja continuar ? S/N : " );
        scanf (" %c", &continuar);

    }  while (continuar == 's' || continuar == 'S');
        
        if (continuar == 'n' || continuar == 'N') {
            printf ("programa encerrdo. \n ");
        } else {
            printf ("opção invalida. \n ");
        }

        return 0;
} 