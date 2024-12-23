#ifndef TIPOS_H
#define TIPOS_H

typedef struct {
int id;  //Código do produto
int quantidade;  //Quantitativo do produto em estoque (QMP)
float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
int qtdeProdutos;  //Quantidade máxima de diferentes produtos
TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

#ifndef ESTOQUE_H
#define ESTOQUE_H

typedef struct {
    int id;
    int quantidade;
    float preco;
} TProduto;

typedef struct {
    int qtdeProdutos;
    TProduto *produtos;
} TEstoque;

void alocaEstoque(TEstoque *pEstoque);
void incluirProdutos(TEstoque *pEstoque);
void listarProdutos(TEstoque *pEstoque);
void desalocaEstoque(TEstoque *pEstoque);

#endif


#endif