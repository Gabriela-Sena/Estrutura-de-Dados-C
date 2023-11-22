#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

typedef struct ponto ponto;

int main(int argc, char const *argv[])
{
    ponto ponto1;
    printf("Digite o X e Y: ");
    scanf("%d%d", &ponto1.x, &ponto1.y);

    printf("X: %d Y: %d\n", ponto1.x, ponto1.y);

    double distancia = sqrt(pow(ponto1.x, 2) + pow(ponto1.y, 2));
    printf("Distancia do ponto (0,0): %.2lf", distancia);
    return 0;
}
