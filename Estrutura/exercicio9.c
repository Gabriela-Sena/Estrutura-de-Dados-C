#include <stdio.h>

struct atleta{
    char nome[30];
    char esporte[20];
    int idade;
    float altura;
};

typedef struct atleta atleta;

void imprimir(atleta atleta){
    printf("%s - ", atleta.nome);
    printf("%s - ", atleta.esporte);
    printf("%d - ", atleta.idade);
    printf("%.2f\n", atleta.altura);
}

atleta maisAlto(int N, atleta atletas[]){
    atleta maisAlto = atletas[0];

    for (int i = 0; i < N; i++){
        if (atletas[i].altura > maisAlto.altura)
            maisAlto = atletas[i];
    }

    return maisAlto;
}

atleta maisVelho(int N, atleta atletas[]){
    atleta maisVelho = atletas[0];

    for (int i = 0; i < N; i++){
        if (atletas[i].idade > maisVelho.idade)
            maisVelho = atletas[i];
    }

    return maisVelho;
}

int main(){
    atleta atletas[5] = {
        {"José", "futebol", 30, 1.7},
        {"Maria", "vôlei", 25, 1.8},
        {"João", "basquete", 27, 1.9},
        {"Ana", "handebol", 22, 1.6},
        {"Pedro", "natação", 28, 1.7}
    };

    for (int i = 0; i < 5; i++)
        imprimir(atletas[i]);

    printf("Mais velho\n");
    imprimir(maisVelho(5, atletas));

    printf("Mais alto\n");
    imprimir(maisAlto(5, atletas));

    return 0;
}