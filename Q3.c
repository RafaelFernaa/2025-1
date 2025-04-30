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
    int numero = 1234;
    int invertido = inverterNumero(numero);
    
    printf("Original: %d\n", numero);
    printf("Invertido: %d\n", invertido);
    
    return 0;
}
