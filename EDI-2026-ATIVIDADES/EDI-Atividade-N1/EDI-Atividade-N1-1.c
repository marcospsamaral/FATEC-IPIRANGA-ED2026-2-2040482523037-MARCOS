#define TAMANHO_TURMA 5;

void main() {
    float notas[TAMANHO_TURMA];
    
    exibirCabecalho();

    for (int i = 0; i < TAMANHO_TURMA; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", notas[i]);
    }
}

void exibirCabecalho() {
    printf("=================================
");
    printf("SISTEMA DE NOTAS - TURMA ADS");
    printf("=================================
\n");
}

float calcularMedia(float vetor[], int tamanho) {
    
}

void aplicarBonus(float *nota, float bonus) {
    
}