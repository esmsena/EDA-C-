/* Faça uma função recursiva chamada MediaDig que receba como argumento um número natural e devolva a média dos seus dígitos.
Para fins de cálculos por recursividade, a função usa dois parâmetros extras inicialmente nulos: o tamanho do número e a soma dos dígitos.

Você está encarregado de desenvolver a função MediaDig conforme assinatura abaixo.

float MediaDig(int Numero, unsigned int Tamanho, float Soma){
SEU CÓDIGO VAI AQUI!
}

Exemplos de chamada a esta função:

int main(){
    printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));
    printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0));
    printf("Media dos digitos: %.2f\n", MediaDig(0, 0, 0));
    return 0;
}
 
Em suma, sua tarefa é postar o código da função float MediaDig(int Numero, unsigned int Tamanho, float Soma) . Uma vez que você concluir esta função, as saídas deverão ser geradas conforme os exemplos apresentados.*/


// Inclui a biblioteca padrão de entrada e saída
# include <stdio.h> 

// Função recursiva que calcula a média dos dígitos de um número
// Parâmetros:
// - Numero: o número cujos dígitos serão calculados
// - Tamanho: o número de dígitos processados até o momento
// - Soma: a soma dos dígitos processados até o momento
float MediaDig (int Numero, unsigned int Tamanho, float Soma) {
    // Caso base: se o número for 0
    if (Numero == 0) {
        // Se o tamanho for 0, retorna 0 para evitar divisão por zero
        if (Tamanho == 0) return 0;
        // Retorna a média dos dígitos
        return Soma / Tamanho;
    }
    // Chamada recursiva: divide o número por 10, incrementa o tamanho e adiciona o dígito atual à soma
    return MediaDig(Numero / 10, Tamanho + 1, Soma + Numero % 10);
}

// Função principal
int main(){
    // Imprime a média dos dígitos do número 1234
    printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));
    // Imprime a média dos dígitos do número 12345
    printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0));
    // Imprime a média dos dígitos do número 0
    printf("Media dos digitos: %.2f\n", MediaDig(0, 0, 0));
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}