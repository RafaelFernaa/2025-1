#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int i, j;
    int encontrado = 0;
    
    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    printf("\nElementos comuns entre os vetores:\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                printf("%d ", vetor1[i]);
                encontrado = 1;
                break;
            }
        }
    }
    
    if (encontrado == 0) {
        printf("Nenhum elemento em comum encontrado.");
    }
    
    printf("\n");
    
    return 0;
}
