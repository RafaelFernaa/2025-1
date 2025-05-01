#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;
    int i, j;
    
    printf("Digite os elementos da matriz 4x4:\n");
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz informada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
