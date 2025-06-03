#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int resultado[LINHAS][COLUNAS];
    int i, j;
    
    printf("Digite os valores da primeira matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Matriz 1 [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\nDigite os valores da segunda matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Matriz 2 [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    printf("\nPrimeira matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSegunda matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    printf("\nResultado da soma das matrizes:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
