#include <stdio.h>

int main() {
    int numeros[10];
    int frequencia[10];
    int i, j;
    int contador = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
        frequencia[i] = -1;
    }
    
    for (i = 0; i < 10; i++) {
        contador = 1;
        for (j = i + 1; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
                frequencia[j] = 0;
            }
        }
        
        if (frequencia[i] != 0) {
            frequencia[i] = contador;
        }
    }
    
    printf("\nFrequencia dos numeros:\n");
    for (i = 0; i < 10; i++) {
        if (frequencia[i] != 0) {
            printf("O numero %d aparece %d vez(es)\n", numeros[i], frequencia[i]);
        }
    }
    
    return 0;
}
