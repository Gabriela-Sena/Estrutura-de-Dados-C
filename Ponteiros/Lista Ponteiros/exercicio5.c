#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void preencherAlunos(struct Aluno *alunos, int tamanho) { //preencher as informações dos alunos
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }
}

struct Aluno *encontraMelhorAluno(struct Aluno *alunos, int tamanho) { // encontrar o aluno com a nota mais alta
    struct Aluno *melhorAluno = &alunos[0];
    int i;
    for (i = 1; i < tamanho; i++) {
        if (alunos[i].nota > melhorAluno->nota) {
            melhorAluno = &alunos[i];
        }
    }

    return melhorAluno;
}

struct Aluno *encontraPiorAluno(struct Aluno *alunos, int tamanho) { //encontrar o aluno com a nota mais baixa
    struct Aluno *piorAluno = &alunos[0];

    int i;
    for (i = 1; i < tamanho; i++) {
        if (alunos[i].nota < piorAluno->nota) {
            piorAluno = &alunos[i];
        }
    }

    return piorAluno;
}

int main() {
    int tamanhoVetor = 5;
    struct Aluno *alunos = (struct Aluno *)malloc(tamanhoVetor * sizeof(struct Aluno));

    preencherAlunos(alunos, tamanhoVetor);

    // Encontrando o melhor e o pior aluno
    struct Aluno *melhor = encontraMelhorAluno(alunos, tamanhoVetor);
    struct Aluno *pior = encontraPiorAluno(alunos, tamanhoVetor);

    printf("\nMelhor Aluno:\n"); // Imprimindo os detalhes do melhor aluno
    printf("Nome: %s\n", melhor->nome);
    printf("Matrícula: %d\n", melhor->matricula);
    printf("Nota: %.2f\n\n", melhor->nota);

    printf("Pior Aluno:\n"); // Imprimindo os detalhes do pior aluno
    printf("Nome: %s\n", pior->nome);
    printf("Matrícula: %d\n", pior->matricula);
    printf("Nota: %.2f\n", pior->nota);

    free(alunos); // Liberando a memória alocada

    return 0;
}