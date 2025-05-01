#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    int n, i;
    
    printf("Digite o numero de alunos a serem cadastrados: ");
    scanf("%d", &n);
    
    struct Aluno alunos[n];
    
    for (i = 0; i < n; i++) {
        printf("\nCadastro do aluno %d:\n", i+1);
        
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Media: ");
        scanf("%f", &alunos[i].media);
    }
    
    printf("\nAlunos aprovados (media >= 7.0):\n");
    for (i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Matricula: %d, Media: %.2f\n", 
                   alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
    
    return 0;
}
