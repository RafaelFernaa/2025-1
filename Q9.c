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
