/*Intercalação de duas palavras

Faça uma função recursiva para intercalar duas palavras V1 e V2 e colocar o resultado em V3. Considere que V3 já está alocado com espaço suficiente para receber os caracteres de V1 e V2.

Você está encarregado de desenvolver a função IntercalaVetores conforme assinatura abaixo.

void IntercalaVetores(char *V1, char *V2, char *V3) {
SEU CÓDIGO VAI AQUI.
}

Exemplo de chamada a esta função:

int main() {
    char V1 = "abc" , V2 = "ABCDE" ;  
    char V3[sizeof(V1) + sizeof(V2) - 1]; 

    IntercalaVetores(V1, V2, V3);  
    printf("Intercalacao: %s\n", V3); 
    return 0;
}
 
Em suma, sua tarefa é postar o código da função void IntercalaVetores(char *V1, char *V2, char *V3). Uma vez que você concluir esta função, as saídas deverão ser geradas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).
For example:

Input	Result
abc
ABCDE
Intercalacao: aAbBcCDE
ABCDE
123
Intercalacao: A1B2C3DE

void IntercalaVetores(char *V1, char *V2, char *V3) {
    if (*V1 == '\0' && *V2 == '\0') {
        *V3 = '\0';
        return;
    }
    if (*V1 != '\0') {
        *V3 = *V1;
        IntercalaVetores(V1 + 1, V2, V3 + 1);
    } else {
        *V3 = *V2;
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
    if (*V2 != '\0') {
        *V3 = *V2;
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
}
*/
# include <stdio.h>


/*void IntercalaVetores(char *V1, char *V2, char *V3) {
    if (*V1 == '\0' && *V2 == '\0') {
        *V3 = '\0';
        return;
    }
    if (*V1 != '\0') {
        *V3 = *V1;
        IntercalaVetores(V1 + 1, V2, V3 + 1);
    } else if (*V2 != '\0') {
        *V3 = *V2;
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
}*/

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função que intercala dois vetores de caracteres (strings) em um terceiro vetor
void IntercalaVetores(char *V1, char *V2, char *V3) {
    // Caso base da recursão: se ambos os vetores V1 e V2 chegaram ao fim (caractere nulo)
    if (*V1 == '\0' && *V2 == '\0') {
        *V3 = '\0'; // Adiciona o caractere nulo ao final de V3 para indicar o fim da string
        return; // Retorna da função
    }
    // Se V1 não chegou ao fim
    if (*V1 != '\0') {
        *V3 = *V1; // Copia o caractere atual de V1 para V3
        V3++; // Avança o ponteiro de V3 para a próxima posição
        V1++; // Avança o ponteiro de V1 para a próxima posição
    }
    // Se V2 não chegou ao fim
    if (*V2 != '\0') {
        *V3 = *V2; // Copia o caractere atual de V2 para V3
        V3++; // Avança o ponteiro de V3 para a próxima posição
        V2++; // Avança o ponteiro de V2 para a próxima posição
    }
    // Chama a função recursivamente para processar os próximos caracteres
    IntercalaVetores(V1, V2, V3);
}

int main() {
    char V1[] = "abc"; // Declara e inicializa a string V1
    char V2[] = "ABCDE"; // Declara e inicializa a string V2
    // Declara o vetor V3 com tamanho suficiente para armazenar a intercalacão de V1 e V2
    char V3[sizeof(V1) + sizeof(V2) - 1];

    // Chama a função IntercalaVetores para intercalar V1 e V2 em V3
    IntercalaVetores(V1, V2, V3);
    // Imprime a string resultante da intercalação
    printf("Intercalacao: %s\n", V3);
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
