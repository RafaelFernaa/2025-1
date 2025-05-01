#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main() {
    struct Produto produtos[100];
    int opcao, contador = 0;
    int codigo_busca, i, encontrado;
    
    do {
        printf("\n=== SISTEMA DE ESTOQUE SIMPLES ===\n");
        printf("1. Cadastrar produto\n");
        printf("2. Buscar produto por codigo\n");
        printf("3. Listar todos os produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                if (contador < 100) {
                    printf("\nCADASTRO DE PRODUTO\n");
                    
                    printf("Nome: ");
                    scanf(" %[^\n]", produtos[contador].nome);
                    
                    printf("Codigo: ");
                    scanf("%d", &produtos[contador].codigo);
                    
                    printf("Quantidade: ");
                    scanf("%d", &produtos[contador].quantidade);
                    
                    printf("Preco: R$ ");
                    scanf("%f", &produtos[contador].preco);
                    
                    contador++;
                    printf("\nProduto cadastrado com sucesso!\n");
                } else {
                    printf("\nLimite de produtos atingido!\n");
                }
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
                    for (i = 0; i < contador; i++) {
                        printf("\nProduto %d:\n", i+1);
                        printf("Nome: %s\n", produtos[i].nome);
                        printf("Codigo: %d\n", produtos[i].codigo);
                        printf("Quantidade: %d\n", produtos[i].quantidade);
                        printf("Preco: R$ %.2f\n", produtos[i].preco);
                    }
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
