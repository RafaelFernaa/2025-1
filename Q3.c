#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0;
    
    while (numero > 0) {
        int digito = numero % 10;
        
        invertido = invertido * 10 + digito;
        
        numero = numero / 10;
    }
    
    return invertido;
}

int main() {
    int numero;
    
    printf("=== Inversor de Números ===\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Por favor, digite apenas números positivos.\n");
        return 1;
    }
    
    int invertido = inverterNumero(numero);
    
    printf("Número original: %d\n", numero);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
