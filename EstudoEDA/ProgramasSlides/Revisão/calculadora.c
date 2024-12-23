# include <stdio.h>

int main (){
    float num1, num2, resultado;
    char operador;
    char continuar;

    do { 
        printf("Agora escolha o operador: (+, -, /, ou *) ");
        scanf (" %c", &operador);
        printf("Digite o primeiro número: ");
        scanf ("%f", &num1);
        printf("Digite o segundo número: ");
        scanf ("%f", &num2);
        

        //calculo

        switch (operador){

        case '+':
        resultado = num1 + num2;
        printf("A soma entre %.2f + %.2f eh: %.2f\n", num1, num2, resultado);
        break;

        case '-':
        resultado = num1 - num2;
        printf("A subtração entre %.2f - %.2f eh: %.2f\n", num1, num2, resultado);
        break;

        case '/':
        resultado = num1 / num2;
        printf("A divisão entre %.2f / %.2f eh: %.2f\n", num1, num2, resultado);
        break;

        case '*':
        resultado = num1 * num2;
        printf("A multiplicação entre %.2f * %.2f eh: %.2f\n", num1, num2, resultado);
        break;

        default:
        printf ("operador inválido. \n " );
        break;
        }
    
    printf("Deseja continuar? S/N ");
    scanf (" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

        if (continuar == 'n' || continuar == 'N'){
            printf ("programa encerrdo. \n ");
        } else {
            printf ("opção invalida. \n ");
        }

        return 0;

}