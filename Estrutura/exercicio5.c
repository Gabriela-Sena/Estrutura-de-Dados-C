#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

typedef struct ponto ponto;

struct retangulo{
    ponto supEsquerdo;
    ponto infDireito;
};

typedef struct retangulo retangulo;

int main(int argc, char const *argv[])
{
    retangulo retangulo;
    ponto ponto;

    printf("Digite o ponto superior esquerdo: ");
    scanf("%f%f", &retangulo.supEsquerdo.x, &retangulo.supEsquerdo.y);
    printf("Digite o ponto inferior direito: ");
    scanf("%f%f", &retangulo.infDireito.x, &retangulo.infDireito.y);

    printf("Digite o ponto X.Y: ");
    scanf("%f%f", &ponto.x, &ponto.y);

    if(retangulo.supEsquerdo.x <= ponto.x && retangulo.infDireito.x >= ponto.x && 
        retangulo.supEsquerdo.y >= ponto.y && retangulo.infDireito.y <= ponto.y)
        printf("Esta dentro do retangulo\n");
    else
        printf("Esta fora do retangulo\n");
    
    return 0;
}
