#include <stdio.h>

struct aluno
{
    char nome[20];
    int matricula;
    float notas[3];
};

typedef struct aluno aluno;

void imprimir(aluno aluno){
    printf("Nome: %sMatricula: %d\n", aluno.nome, aluno.matricula);
    for(int i = 0; i < 3; i++)
        printf("Nota %d: %.1f\n", i+1, aluno.notas[i]);
    printf("\n");
}

aluno maiorMedia(aluno alunos[], int N){
    float media, maiorMedia = 0;
    int posicao = 0;

    for(int i = 0; i < N; i++){
        media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
        if(media > maiorMedia){
            maiorMedia = media;
            posicao = i;
        }
    }
    return alunos[posicao];
}

int main(int argc, char const *argv[])
{
    int numAlunos = 3;
    aluno alunos[numAlunos];

    for(int i = 0; i < numAlunos; i++){
        printf("Digite os dados do aluno %d\n", i+1);
        printf("Nome: ");
        fgets(alunos[i].nome, 20, stdin);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        for(int j = 0; j < 3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }
        fflush(stdin);
    }

    for(int i = 0; i < numAlunos; i++)
        imprimir(alunos[i]);

    printf("\nMaior media\n");
    imprimir(maiorMedia(alunos, numAlunos));
    return 0;
}