#include <stdio.h>

int main() {
    int numeros[10];
    int i, j;
    int contagem;
    int verificado[10] = {0};
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nFrequencia dos numeros:\n");
    
    for (i = 0; i < 10; i++) {
        if (verificado[i] == 1) {
            continue;
        }
        
        contagem = 1;
        
        for (j = i + 1; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contagem++;
                verificado[j] = 1;
            }
        }
        
        printf("O numero %d aparece %d vez(es)\n", numeros[i], contagem);
    }
    
    return 0;
}
