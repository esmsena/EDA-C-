#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"

void reset(TTemperaturas *temperaturas) {
    printf("Digite a quantidade de dias de registros de temperaturas: ");
    scanf("%d", &temperaturas->qtde_dias);

    temperaturas->medidas = (TMedidas *)malloc(temperaturas->qtde_dias * sizeof(TMedidas));
    if (temperaturas->medidas == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    for (int i = 0; i < temperaturas->qtde_dias; i++) {
        temperaturas->medidas[i].temperatura = (float *)malloc(sizeof(float));
        if (temperaturas->medidas[i].temperatura == NULL) {
            printf("Erro ao alocar memória para temperaturas!\n");
            exit(1);
        }
    }

    temperaturas->qtde_medidas = 0;
    printf("Reset concluído!\n");
}

void inserir_medida(TTemperaturas *temperaturas) {
    if (temperaturas->qtde_medidas >= temperaturas->qtde_dias) {
        printf("Número máximo de medidas atingido!\n");
        return;
    }

    TMedidas *nova_medida = &temperaturas->medidas[temperaturas->qtde_medidas];
    printf("Digite o nome da cidade: ");
    scanf("%s", nova_medida->cidade);
    printf("Digite a temperatura: ");
    scanf("%f", nova_medida->temperatura);

    temperaturas->qtde_medidas++;
    printf("Medida inserida com sucesso!\n");
}

void estatistica(TTemperaturas *temperaturas) {
    if (temperaturas->qtde_medidas == 0) {
        printf("Nenhuma medida registrada!\n");
        return;
    }

    float soma = 0, menor = *temperaturas->medidas[0].temperatura, maior = *temperaturas->medidas[0].temperatura;
    char cidade_menor[20], cidade_maior[20];
    strcpy(cidade_menor, temperaturas->medidas[0].cidade);
    strcpy(cidade_maior, temperaturas->medidas[0].cidade);

    for (int i = 0; i < temperaturas->qtde_medidas; i++) {
        float temp = *temperaturas->medidas[i].temperatura;
        soma += temp;

        if (temp < menor) {
            menor = temp;
            strcpy(cidade_menor, temperaturas->medidas[i].cidade);
        }
        if (temp > maior) {
            maior = temp;
            strcpy(cidade_maior, temperaturas->medidas[i].cidade);
        }
    }

    printf("Temperatura média: %.2f\n", soma / temperaturas->qtde_medidas);
    printf("Menor temperatura: %.2f (Cidade: %s)\n", menor, cidade_menor);
    printf("Maior temperatura: %.2f (Cidade: %s)\n", maior, cidade_maior);
}

void sair(TTemperaturas *temperaturas) {
    for (int i = 0; i < temperaturas->qtde_dias; i++) {
        free(temperaturas->medidas[i].temperatura);
    }
    free(temperaturas->medidas);
    printf("Recursos desalocados. Encerrando o programa.\n");
}

int main() {
    TTemperaturas temperaturas;
    temperaturas.qtde_dias = 0;
    temperaturas.qtde_medidas = 0;
    temperaturas.medidas = NULL;

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Reset\n");
        printf("2. Inserir Medida\n");
        printf("3. Estatística\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                reset(&temperaturas);
                break;
            case 2:
                inserir_medida(&temperaturas);
                break;
            case 3:
                estatistica(&temperaturas);
                break;
            case 4:
                sair(&temperaturas);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
