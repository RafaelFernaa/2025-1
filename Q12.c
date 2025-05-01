#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char texto[]) {
    int tamanho = strlen(texto);
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio < fim) {
        if (texto[inicio] != texto[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }
    
    return 1;
}

int main() {
    char texto[100];
    
    printf("Digite uma palavra ou frase: ");
    scanf("%s", texto); 
    
    if (ehPalindromo(texto)) {
        printf("\"%s\" é um palíndromo.\n", texto);
    } else {
        printf("\"%s\" não é um palíndromo.\n", texto);
    }
    
    return 0;
}
