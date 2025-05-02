#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6
#define MAX_PALAVRA 30

char *palavras[] = {
    "programacao",
    "computador",
    "desenvolvimento",
    "algoritmo",
    "linguagem",
    "software",
    "hardware",
    "compilador",
    "variavel",
    "funcao"
};

int total_palavras = 10;

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void desenharForca(int erros) {
    printf("\n  _______\n");
    printf("  |     |\n");
    
    if (erros >= 1) {
        printf("  |     O\n");
    } else {
        printf("  |\n");
    }
    
    if (erros == 2) {
        printf("  |     |\n");
    } else if (erros == 3) {
        printf("  |    /|\n");
    } else if (erros >= 4) {
        printf("  |    /|\\\n");
    } else {
        printf("  |\n");
    }
    
    if (erros == 5) {
        printf("  |    /\n");
    } else if (erros >= 6) {
        printf("  |    / \\\n");
    } else {
        printf("  |\n");
    }
    
    printf("  |\n");
    printf("__|__\n");
}

int main() {
    srand(time(NULL));
    
    char letra;
    char letrasUsadas[26] = {0};
    char palavraOculta[MAX_PALAVRA];
    int erros = 0;
    int acertou = 0;
    int i;
    
    int indice = rand() % total_palavras;
    char palavra[MAX_PALAVRA];
    strcpy(palavra, palavras[indice]);
    
    for (i = 0; i < strlen(palavra); i++) {
        palavraOculta[i] = '_';
    }
    palavraOculta[strlen(palavra)] = '\0';
    
    printf("=== JOGO DA FORCA ===\n");
    printf("Adivinhe a palavra!\n");

while (erros < MAX_TENTATIVAS && !acertou) {
        limparTela();
        
        printf("=== JOGO DA FORCA ===\n");
        desenharForca(erros);
        
        printf("\nPalavra: ");
        for (i = 0; i < strlen(palavra); i++) {
            printf("%c ", palavraOculta[i]);
        }
        printf("\n");
        
        printf("Letras usadas: ");
        for (i = 0; i < 26; i++) {
            if (letrasUsadas[i]) {
                printf("%c ", 'a' + i);
            }
        }
        printf("\n");
        
        printf("Tentativas restantes: %d\n", MAX_TENTATIVAS - erros);
        
        if (erros == MAX_TENTATIVAS) {
            break;
        }
