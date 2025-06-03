#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    
    if (n == 1) {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    
    printf("Informe quantos termos da sequencia de Fibonacci deseja ver: ");
    scanf("%d", &n);
    
    printf("Sequencia de Fibonacci com %d termos:\n", n);
    
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); 
    }
    
    printf("\n\nO %d-esimo termo da sequencia eh: %d\n", n, fibonacci(n));
    
    return 0;
}
