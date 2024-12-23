# include <stdio.h>

/**
 * ChecaParenteses - Verifica se os parênteses em uma expressão estão balanceados.
 * @expr: A expressão a ser verificada.
 * @count: O número de caracteres na expressão.
 *
 * Retorna 1 se os parênteses estiverem balanceados, caso contrário, retorna 0.
 */
int ChecaParenteses(char *expr, int count) {

    /* se o caracter final da string for vazio ou seja se chegar no final da string ele retorna */
    if (*expr == '\0') return count == 0 ? 0 : -1;


    if (*expr == '(') count++;
    if (*expr == ')') count--;
    if (count < 0) return 1;
    return ChecaParenteses(expr + 1, count);
}

int main() {
    char *expression1 = "((1 + 2) * (3 + 4))";  
    char *expression2 = "((1 + 2) * (3 + 4)";   
    char *expression3 = "((1 + 2))* (3 + 4))"; 
    printf("Resultado para expressão 1: %d\n", ChecaParenteses(expression1, 0)); // Deve retornar 0
    printf("Resultado para expressão 2: %d\n", ChecaParenteses(expression2, 0)); // Deve retornar -1
    printf("Resultado para expressão 3: %d\n", ChecaParenteses(expression3, 0)); // Deve retornar 1
    return 0;
}