#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[15];
    char email[50];
};

void adicionarContato(struct Contato agenda[], int *totalContatos) {
    if (*totalContatos < 100) {
        printf("\nAdicionar novo contato\n");
        
        printf("Nome: ");
        scanf(" %[^\n]", agenda[*totalContatos].nome);
        
        printf("Telefone: ");
        scanf(" %[^\n]", agenda[*totalContatos].telefone);
        
        printf("Email: ");
        scanf(" %[^\n]", agenda[*totalContatos].email);
        
        (*totalContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("Agenda cheia!\n");
    }
}

void buscarContato(struct Contato agenda[], int totalContatos) {
    char nomeBusca[50];
    int encontrado = 0;
    
    printf("\nBuscar contato\n");
    printf("Digite o nome para busca: ");
    scanf(" %[^\n]", nomeBusca);
    
    for (int i = 0; i < totalContatos; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Email: %s\n", agenda[i].email);
            encontrado = 1;
            break;
        }
    }
    
    if (!encontrado) {
        printf("Contato nao encontrado!\n");
    }
}
