#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        if (vetor[meio] == chave) {
            return meio;
        }
        
        if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    
    return -1;
}

void ordenarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    ordenarVetor(vetor, tamanho);
    
    printf("\nVetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    int chave;
    printf("\n\nDigite o valor que deseja buscar: ");
    scanf("%d", &chave);
    
    int resultado = buscaBinaria(vetor, tamanho, chave);
    
    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d do vetor ordenado.\n", chave, resultado);
    } else {
        printf("Valor %d não encontrado no vetor.\n", chave);
    }
    
    return 0;
}
