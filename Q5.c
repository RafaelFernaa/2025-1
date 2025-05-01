#include <stdio.h>

int main() {
    int tamanho;
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    
    int vetor1[tamanho];
    int vetor2[tamanho];
    int intersecao[tamanho];
    int i, j, k = 0;
    
    printf("\nDigite os elementos do primeiro vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            if (vetor1[i] == vetor2[j]) {
                int ja_existe = 0;
                
                for (int m = 0; m < k; m++) {
                    if (intersecao[m] == vetor1[i]) {
                        ja_existe = 1;
                        break;
                    }
                }
                
                if (ja_existe == 0) {
                    intersecao[k] = vetor1[i];
                    k++;
                }
                
                break;
            }
        }
    }
    
    printf("\nElementos comuns entre os vetores:\n");
    
    if (k == 0) {
        printf("Nenhum elemento em comum encontrado.");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", intersecao[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}
