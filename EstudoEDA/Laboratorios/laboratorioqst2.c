/* Sistema de Gerenciamento de Estoque - SGE

Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar o estoque de uma loja. O sistema SGE (Sistema de Gerenciamento de Estoque) se baseia em dois tipos de dados: TProduto e TEstoque e possui quatro rotinas principais: alocaEstoque (realiza alocação dinâmica de memória), incluirProdutos (lê e armazena os detalhes dos produtos), listarProdutos (lista na tela  todos os produtos em estoque) e desalocaEstoque (realiza a desalocação de memória) conforme detalhado abaixo.

typedef struct {
int id;  //Código do produto
int quantidade;  //Quantitativo do produto em estoque (QMP)
float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
int qtdeProdutos;  //Quantidade máxima de diferentes produtos
TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SGE. Como você pode ver, os testes das funções são realizados com base na variável Estoque.

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);
return 0;

}

Você está encarregado de desenvolver a função incluirProdutos conforme abaixo.

void incluirProdutos(TEstoque *pEstoque){
SEU CÓDIGO VAI AQUI!
}

Requisitos da função incluirProdutos:
R1. Ler do usuário os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos. Veja que o parâmetro pEstoque é um parâmetro por referência. 

Em suma, sua tarefa é postar o código da função void incluirProdutos(TEstoque *pEstoque) . As outras funções do SGE estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.*/
# include <stdio.h>
# include <stdlib.h>
#include "tipos2.h"

void alocaEstoque(TEstoque *pEstoque);
void listarProdutos(TEstoque *pEstoque);
void desalocaEstoque(TEstoque *pEstoque);


void incluirProdutos(TEstoque *pEstoque) {
    for (int i = 0; i < pEstoque->qtdeProdutos; i++) {
        printf("Digite o código do produto %d: ", i + 1);
        scanf("%d", &pEstoque->produtos[i].id);
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &pEstoque->produtos[i].quantidade);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &pEstoque->produtos[i].preco);
    }
}

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);
return 0;

}