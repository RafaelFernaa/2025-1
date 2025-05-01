#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int opcao, contador = 0;
    int codigo_busca, i, encontrado;
    float valor_total = 0;
    
    do {
        printf("\n=== SISTEMA DE ESTOQUE SIMPLES ===\n");
        printf("1. Cadastrar produto\n");
        printf("2. Buscar produto por codigo\n");
        printf("3. Listar todos os produtos\n");
        printf("4. Valor total do estoque\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                if (contador < MAX_PRODUTOS) {
                    printf("\nCADASTRO DE PRODUTO\n");
                    
                    printf("Nome: ");
                    scanf(" %[^\n]", produtos[contador].nome);
                    
                    printf("Codigo: ");
                    scanf("%d", &produtos[contador].codigo);
                    
                    for (i = 0; i < contador; i++) {
                        if (produtos[i].codigo == produtos[contador].codigo) {
                            printf("\nERRO: Codigo ja existente!\n");
                            goto fim_cadastro;
                        }
                    }
                    
                    printf("Quantidade: ");
                    scanf("%d", &produtos[contador].quantidade);
                    
                    printf("Preco: R$ ");
                    scanf("%f", &produtos[contador].preco);
                    
                    contador++;
                    printf("\nProduto cadastrado com sucesso!\n");
                } else {
                    printf("\nLimite de produtos atingido!\n");
                }
                fim_cadastro:
                break;
                
            case 2:
                printf("\nBUSCA DE PRODUTO\n");
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo_busca);
                
                encontrado = 0;
                for (i = 0; i < contador; i++) {
                    if (produtos[i].codigo == codigo_busca) {
                        printf("\nProduto encontrado:\n");
                        printf("Nome: %s\n", produtos[i].nome);
                        printf("Codigo: %d\n", produtos[i].codigo);
                        printf("Quantidade: %d\n", produtos[i].quantidade);
                        printf("Preco: R$ %.2f\n", produtos[i].preco);
                        printf("Valor total: R$ %.2f\n", produtos[i].quantidade * produtos[i].preco);
                        encontrado = 1;
                        break;
                    }
                }
                
                if (encontrado == 0) {
                    printf("\nProduto nao encontrado!\n");
                }
                break;
                
            case 3:
                if (contador == 0) {
                    printf("\nNenhum produto cadastrado!\n");
                } else {
                    printf("\nLISTA DE PRODUTOS\n");
                    printf("------------------------------------------\n");
                    printf("%-20s %-8s %-10s %-10s\n", "Nome", "Codigo", "Quantidade", "Preco (R$)");
                    printf("------------------------------------------\n");
                    
                    for (i = 0; i < contador; i++) {
                        printf("%-20s %-8d %-10d R$%-10.2f\n", 
                            produtos[i].nome, 
                            produtos[i].codigo, 
                            produtos[i].quantidade, 
                            produtos[i].preco);
                    }
                }
                break;
                
            case 4:
                if (contador == 0) {
                    printf("\nNenhum produto cadastrado!\n");
                } else {
                    valor_total = 0;
                    for (i = 0; i < contador; i++) {
                        valor_total += produtos[i].quantidade * produtos[i].preco;
                    }
                    printf("\nValor total do estoque: R$ %.2f\n", valor_total);
                }
                break;
                
            case 0:
                printf("\nEncerrando programa...\n");
                break;
                
            default:
                printf("\nOpcao invalida!\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}
