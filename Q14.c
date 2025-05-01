#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cifrarCesar(char mensagem[], int chave) {
    int i = 0;
    
    chave = chave % 26;
    if (chave < 0) {
        chave += 26;
    }
    
    while (mensagem[i] != '\0') {
        if (isalpha(mensagem[i])) {
            char base = isupper(mensagem[i]) ? 'A' : 'a';
            int deslocado = (mensagem[i] - base + chave) % 26;
            if (deslocado < 0) {
                deslocado += 26;
            }
            mensagem[i] = deslocado + base;
        }
        i++;
    }
}

void decifrarCesar(char mensagem[], int chave) {
    chave = chave % 26;
    if (chave < 0) {
        chave += 26;
    }
    
    cifrarCesar(mensagem, 26 - chave);
}

int main() {
    char mensagem[100];
    int chave;
    int opcao;
    
    printf("=== CIFRA DE CÉSAR ===\n");
    printf("1. Criptografar\n");
    printf("2. Descriptografar\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar(); 
    
    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    
    int tam = strlen(mensagem);
    if (tam > 0 && mensagem[tam-1] == '\n') {
        mensagem[tam-1] = '\0';
    }
    
    printf("Digite a chave (deslocamento): ");
    scanf("%d", &chave);
    
    if (opcao == 1) {
        cifrarCesar(mensagem, chave);
        printf("Mensagem criptografada: %s\n", mensagem);
    } else if (opcao == 2) {
        decifrarCesar(mensagem, chave);
        printf("Mensagem descriptografada: %s\n", mensagem);
    } else {
        printf("Opção inválida!\n");
    }
    
    return 0;
}
