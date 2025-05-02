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
