#include <stdio.h>
#define TAMANHO_ESTOQUE 5
#define ESTOQUE_MINIMO 10

int estoque[TAMANHO_ESTOQUE];

void exibirCabecalho() {
    printf("=================================\n");
    printf("SISTEMA DE ESTOQUE - LOJA CONSTRUMAIS\n");
    printf("=================================\n");
}

void preencherEstoque() {
    int *p = estoque;
    for (int i = 0; i < TAMANHO_ESTOQUE; i++) {
        printf("Quantidade do produto %d: ", i+1);
        scanf("%d", &*(p + i));
    }
}

void exibirEstoque(int momento) {
    if (momento == 0) {
        printf("--- Estoque atual (antes da reposicao) --\n");
    } else if (momento = 1) {
        printf("–- Aplicacao real da reposicao (ponteiro interno ao vetor global) –-\n");
    }
    
    int *p = estoque;
    for (int i = 0; i < TAMANHO_ESTOQUE; i++) {
        printf("Produto %d: %d unidades", i+1, &*(p + i));
    }
}

float calcularMediaEstoque() {
    
}

int main()
{
    exibirCabecalho();
    preencherEstoque();
    return 0;
}
