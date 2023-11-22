#include <stdio.h>
#include <math.h>

struct ponto{
    double x;
    double y;
};

typedef struct ponto ponto;

int main(int argc, char const *argv[])
{
    ponto pontos[2];
    printf("Digite o X e Y do ponto A: ");
    scanf("%lf%lf", &pontos[0].x, &pontos[0].y);

    printf("Digite o X e Y do ponto B: ");
    scanf("%lf%lf", &pontos[1].x, &pontos[1].y);

    printf("[A] X: %.2lf Y: %.2lf\n[B] X: %.2lf Y: %.2lf\n", pontos[0].x, pontos[0].y,
        pontos[1].x, pontos[1].y);

    double distancia = sqrt(pow(pontos[0].x - pontos[1].x, 2) + 
                            pow(pontos[0].y - pontos[1].y, 2));
    printf("Distancia dos pontos: %.2lf", distancia);
    return 0;
}
