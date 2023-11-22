#include <stdio.h>

struct dataNascimento{
    int dia;
    int mes;
    int ano;
};

struct pessoa{
    char nome[50];
    struct dataNascimento nascimento;
};

typedef struct pessoa pessoa;

void imprimir(pessoa pessoa){
    printf("%s - ", pessoa.nome);
    printf("%d/%d/%d\n", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
}

pessoa maisVelha(int N, pessoa pessoas[]){
    pessoa maisVelha = pessoas[0];

    for (int i = 0; i < N; i++){
        if (pessoas[i].nascimento.ano < maisVelha.nascimento.ano)
            maisVelha = pessoas[i];
        else if(pessoas[i].nascimento.ano == maisVelha.nascimento.ano)
            if(pessoas[i].nascimento.mes < maisVelha.nascimento.mes)
                maisVelha = pessoas[i];
            else if(pessoas[i].nascimento.mes == maisVelha.nascimento.mes)
                if(pessoas[i].nascimento.dia < maisVelha.nascimento.dia)
                    maisVelha = pessoas[i];
    }

    return maisVelha;
}

pessoa maisNova(int N, pessoa pessoas[]){
    pessoa maisNova = pessoas[0];

    for (int i = 0; i < N; i++){
        if (pessoas[i].nascimento.ano > maisNova.nascimento.ano)
            maisNova = pessoas[i];
        else if(pessoas[i].nascimento.ano == maisNova.nascimento.ano)
            if(pessoas[i].nascimento.mes > maisNova.nascimento.mes)
                maisNova = pessoas[i];
            else if(pessoas[i].nascimento.mes == maisNova.nascimento.mes)
                if(pessoas[i].nascimento.dia > maisNova.nascimento.dia)
                    maisNova = pessoas[i];
    }

    return maisNova;
}

int main(){
    pessoa pessoas[6] = {
        {"João", {10, 10, 1990}},
        {"Maria", {20, 10, 1989}},
        {"José", {20, 9, 1989}},
        {"Ana", {10, 10, 1990}},
        {"Pedro", {10, 10, 1991}},
        {"Paula", {10, 8, 1990}}
    };

    imprimir(maisVelha(6, pessoas));
    imprimir(maisNova(6, pessoas));

    return 0;
}