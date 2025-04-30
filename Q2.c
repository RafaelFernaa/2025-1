#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    int base, expoente;
    
    printf("Calculadora de Potência\n");
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    if (expoente < 0) {
        printf("Erro: Este programa não calcula expoentes negativos.\n");
        return 1;
    }
    
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d = %d\n", base, expoente, resultado);
    
    return 0;
}
