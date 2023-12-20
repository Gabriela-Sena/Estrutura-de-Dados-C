#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[50];
    char modelo[50];
    int ano;
    float valor;
};

struct Carro* encontraMaisVelho(struct Carro* carros, int tamanho) {
    if (tamanho <= 0) {
        return NULL;
    }

    struct Carro* maisVelho = &carros[0];

    for (int i = 1; i < tamanho; i++) {
        if (carros[i].ano < maisVelho->ano) {
            maisVelho = &carros[i];
        }
    }

    return maisVelho;
}

struct Carro* encontraMaisBarato(struct Carro* carros, int tamanho) {
    if (tamanho <= 0) {
        return NULL;
    }

    struct Carro* maisBarato = &carros[0];

    for (int i = 1; i < tamanho; i++) {
        if (carros[i].valor < maisBarato->valor) {
            maisBarato = &carros[i];
        }
    }

    return maisBarato;
}

int main() {

    struct Carro carros[4] = {
        {"Marca1", "Modelo1", 2000, 10000.0},
        {"Marca2", "Modelo2", 2010, 12000.0},
        {"Marca3", "Modelo3", 2005, 8000.0},
    };

    printf("Digite a marca do último carro: ");
    scanf("%s", carros[3].marca);
    printf("Digite o modelo do último carro: ");
    scanf("%s", carros[3].modelo);
    printf("Digite o ano do último carro: ");
    scanf("%d", &carros[3].ano);
    printf("Digite o valor do último carro: ");
    scanf("%f", &carros[3].valor);

    struct Carro* maisVelho = encontraMaisVelho(carros, 4);
    struct Carro* maisBarato = encontraMaisBarato(carros, 4);

    printf("\nInformações dos Carros:\n");

    for (int i = 0; i < 4; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %d\n", carros[i].ano);
        printf("Valor: %.2f\n", carros[i].valor);
        printf("\n");
    }

    printf("Carro mais velho:\n");
    printf("Marca: %s\n", maisVelho->marca);
    printf("Modelo: %s\n", maisVelho->modelo);
    printf("Ano: %d\n", maisVelho->ano);
    printf("Valor: %.2f\n", maisVelho->valor);

    printf("Carro mais barato:\n");
    printf("Marca: %s\n", maisBarato->marca);
    printf("Modelo: %s\n", maisBarato->modelo);
    printf("Ano: %d\n", maisBarato->ano);
    printf("Valor: %.2f\n", maisBarato->valor);

    return 0;
}