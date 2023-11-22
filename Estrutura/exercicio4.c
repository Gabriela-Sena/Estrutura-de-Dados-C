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

    printf("Digite o ponto superior esquerdo: ");
    scanf("%f%f", &retangulo.supEsquerdo.x, &retangulo.supEsquerdo.y);
    printf("Digite o ponto inferior direito: ");
    scanf("%f%f", &retangulo.infDireito.x, &retangulo.infDireito.y);

    float largura = abs(retangulo.infDireito.x - retangulo.supEsquerdo.x);
    float altura = abs(retangulo.supEsquerdo.y - retangulo.infDireito.y);

    printf("Altura: %.1f Base: %1.f\n", altura, largura);

    float perimetro = (largura + altura) * 2;
    float area = largura * altura;
    float diagonal = sqrt(pow(altura, 2) + pow(largura, 2));

    printf("Perimetro: %.2f\nArea: %.2f\nDiagonal: %.2f\n", perimetro, area, diagonal);
    
    return 0;
}
