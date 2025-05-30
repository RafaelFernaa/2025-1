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

void exibirTodos(struct Contato agenda[], int totalContatos) {
    if (totalContatos == 0) {
        printf("\nAgenda vazia!\n");
        return;
    }
    
    printf("\nLista de Contatos:\n");
    for (int i = 0; i < totalContatos; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Email: %s\n", agenda[i].email);
        printf("--------------------\n");
    }
}

int main() {
    struct Contato agenda[100];
    int totalContatos = 0;
    int opcao;
    
    do {
        printf("\n==== AGENDA DE CONTATOS ====\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato por nome\n");
        printf("3. Exibir todos os contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                adicionarContato(agenda, &totalContatos);
                break;
            case 2:
                buscarContato(agenda, totalContatos);
                break;
            case 3:
                exibirTodos(agenda, totalContatos);
                break;
            case 0:
                printf("Saindo da agenda...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    
    return 0;
}
