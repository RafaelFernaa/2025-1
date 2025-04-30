#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    
    if (n == 2) {
        return true;
    }
    
    if (n % 2 == 0) {
        return false;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int inicio, fim;
    int contador = 0;
    
    printf("=== Verificador de Números Primos ===\n");
    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    
    if (inicio > fim) {
        printf("Erro: O início do intervalo não pode ser maior que o fim.\n");
        return 1;
    }
    
    printf("\nNúmeros primos no intervalo [%d, %d]:\n", inicio, fim);
    
    for (int num = inicio; num <= fim; num++) {
        if (ehPrimo(num)) {
            printf("%d ", num);
            contador++;
            
            if (contador % 10 == 0) {
                printf("\n");
            }
        }
    }
    
    if (contador % 10 != 0) {
        printf("\n");
    }
    
    printf("\nTotal de números primos encontrados: %d\n", contador);
    
    return 0;
}
