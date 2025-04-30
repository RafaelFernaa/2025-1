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
    int teste = 7;
    if (ehPrimo(teste)) {
        printf("%d é um número primo!\n", teste);
    } else {
        printf("%d não é um número primo.\n", teste);
    }
    
    return 0;
}
