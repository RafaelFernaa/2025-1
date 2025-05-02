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
