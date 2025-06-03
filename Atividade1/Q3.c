#include <stdio.h>
#include <string.h>

int inverterNumero(int numero) {
    char numeroStr[20];  // Buffer para armazenar o número como string
    sprintf(numeroStr, "%d", numero);
    
    int tamanho = strlen(numeroStr);
    char invertidoStr[20];  // Buffer para armazenar o número invertido
    
    for (int i = 0; i < tamanho; i++) {
        invertidoStr[i] = numeroStr[tamanho - 1 - i];
    }
    invertidoStr[tamanho] = '\0';  // Adicionar o terminador de string
    
    int invertido;
    sscanf(invertidoStr, "%d", &invertido);
    
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
    
    printf("Numero original: ");
    
    char numeroStr[20];
    sprintf(numeroStr, "%d", numero);
    printf("%s\n", numeroStr);
    
    printf("Numero invertido: ");
    char invertidoStr[20];
    sprintf(invertidoStr, "%d", invertido);
    
    int zerosFinais = 0;
    int temp = numero;
    
    while (temp > 0 && temp % 10 == 0) {
        zerosFinais++;
        temp /= 10;
    }
    
    for (int i = 0; i < zerosFinais; i++) {
        printf("0");
    }
    
    printf("%s\n", invertidoStr);
    
    return 0;
}
