#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[50];
    char modelo[50];
    int ano;
    float valor;
};

struct Carro* encontraMaisVelho(struct Carro* carros, int tamanho) {
    int i;

    if (tamanho <= 0) {
        return NULL;
    }

    struct Carro* maisVelho = &carros[0];

    for (i = 1; i < tamanho; i++) {
        if (carros[i].ano < maisVelho->ano) {
            maisVelho = &carros[i];
        }
    }

    return maisVelho;
}

struct Carro* encontraMaisBarato(struct Carro* carros, int tamanho) {
    int i;
    if (tamanho <= 0) {
        return NULL;
    }

    struct Carro* maisBarato = &carros[0];

    for (i = 1; i < tamanho; i++) {
        if (carros[i].valor < maisBarato->valor) {
            maisBarato = &carros[i];
        }
    }

    return maisBarato;
}

int main() {
    int i;

    struct Carro carros[4] = {
        {"Chevrolet", "Cruze", 2019, 49000.0},
        {"Fiat", "Punto", 2010, 35000.0},
        {"Renault", "Kwid", 2022, 60000.0},
    };

    printf("Digite a marca do ultimo carro: ");
    scanf("%s", carros[3].marca);
    printf("Digite o modelo do ultimo carro: ");
    scanf("%s", carros[3].modelo);
    printf("Digite o ano do ultimo carro: ");
    scanf("%d", &carros[3].ano);
    printf("Digite o valor do ultimo carro: ");
    scanf("%f", &carros[3].valor);

    struct Carro* maisVelho = encontraMaisVelho(carros, 4);
    struct Carro* maisBarato = encontraMaisBarato(carros, 4);

    printf("\nCarros Cadastrados:\n");

    for (i = 0; i < 4; i++) {
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