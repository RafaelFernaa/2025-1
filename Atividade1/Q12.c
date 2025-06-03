#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char texto[]) {
    int tamanho = strlen(texto);
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio < fim) {
        while (inicio < tamanho && !isalnum(texto[inicio])) {
            inicio++;
        }
        
        while (fim >= 0 && !isalnum(texto[fim])) {
            fim--;
        }
        
        if (inicio < fim) {
            if (tolower(texto[inicio]) != tolower(texto[fim])) {
                return 0;
            }
            inicio++;
            fim--;
        }
    }
    
    return 1;
}

int main() {
    char texto[100];
    
    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);
    
    size_t len = strlen(texto);
    if (len > 0 && texto[len-1] == '\n') {
        texto[len-1] = '\0';
    }
    
    if (ehPalindromo(texto)) {
        printf("\"%s\" é um palíndromo.\n", texto);
    } else {
        printf("\"%s\" não é um palíndromo.\n", texto);
    }
    
    return 0;
}
