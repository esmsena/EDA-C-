#include <stdio.h>

// Definindo a struct Pessoa
typedef struct {
    int Idade;
    float Peso;
    float Altura;
} Pessoa;

// Função para imprimir os dados de uma pessoa
void ImprimePessoa(Pessoa p) {
    printf("Idade: %d anos\n", p.Idade);
    printf("Peso: %.1f kg\n", p.Peso);
    printf("Altura: %.2f m\n", p.Altura);
    printf("---------------------\n");
}

int main() {
    // Declaração de variáveis
    Pessoa Joao, P2;
    Pessoa Povo[10];

    // Inicializando os dados
    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    Povo[4].Idade = 23;
    Povo[4].Peso = 75.3;
    Povo[4].Altura = 1.89;

    P2 = Povo[4];
    P2.Idade++; // Incrementa a idade de P2

    // Chamada da função para imprimir os dados
    ImprimePessoa(Joao);
    ImprimePessoa(Povo[4]);
    ImprimePessoa(P2);

    return 0;
}
