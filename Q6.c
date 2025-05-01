#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];
    int i, j;
    
    printf("Digite os valores da primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz 1 [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\nDigite os valores da segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz 2 [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    printf("\nResultado da soma das matrizes:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
