#include <stdio.h>
#include <stdlib.h>

struct Triangulo {
    float base;
    float altura;
};

float calcularTriangulo(struct Triangulo *triangulo) {
    return (triangulo->base * triangulo->altura) / 2.0;//base*altura/2
}

int main() {
    struct Triangulo triangulo1;

    printf("Digite a base do triangulo: ");
    scanf("%f", &triangulo1.base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &triangulo1.altura);

    float area = calcularTriangulo(&triangulo1);

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}