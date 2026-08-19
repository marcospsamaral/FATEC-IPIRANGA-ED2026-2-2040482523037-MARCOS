#include <stdio.h>
#define TAMANHO_TURMA 5

void exibirCabecalho() {
    printf("=================================\n");
    printf(" SISTEMA DE NOTAS - TURMA ADS\n");
    printf("=================================\n");
}

float calcularMedia(float vetor[], int tamanho) {
    float total = 0.0;
    for (int i = 0; i < tamanho; i++) {
        total = total + vetor[i];
    }
    
    return total/tamanho;
}

void simularAjuste(float notaOriginal, float bonus) {
    printf("\n\n--- Simulacao do ajuste (passagem por valor) ---\n");
    printf("Simulacao para o aluno 1: %.2f + %.2f = %.2f (nao aplicavel ainda)", notaOriginal, bonus, notaOriginal + bonus);
    printf("\nNota do aluno 1 apos a simulacao (inalterada): %.2f", notaOriginal);
}

void aplicarBonus(float *nota, float bonus) {
    printf("\n--- Aplicacao real do bonus (passagem por referencia) ---");
    
    for (int i; i < TAMANHO_TURMA; i++) {
        nota[i] = *(nota + i) + bonus;
    }
    
    printf("\nBonus de %.2f aplicado a todas as notas da turma");
}

int main() {
    float notas[TAMANHO_TURMA];
    float bonus = 0.0;
    float *nota = notas;
    
    exibirCabecalho();

    for (int i = 0; i < TAMANHO_TURMA; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    printf("Informe o valor do bonus a aplicar: ");
    scanf("%f", &bonus);
    
    printf("\n--- Media da turma antes do ajuste ---\n");
    printf("Media inicial: %.2f", calcularMedia(notas, TAMANHO_TURMA));
    
    simularAjuste(notas[0], bonus);
    
    aplicarBonus(nota, bonus);
    
    printf("\n--- Notas finais da turma ---\n");
    
    for (int i = 0; i < TAMANHO_TURMA; i++) {
        printf("Aluno %d: ", i + 1);
        printf("%.2f", &notas[i]);
    }
    
    printf("\n--- Media da turma apos do ajuste ---\n");
    printf("Media final: %.2f", calcularMedia(notas, TAMANHO_TURMA));
}

