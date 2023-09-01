#include <stdio.h>

double media(double a, double b, double c, char tipo)
{
    if (tipo == 'a')
        return (a + b + c) / 3;
    if (tipo == 'p')
        return (a * 5 + b * 3 + c * 2) / (5 + 3 + 2);
    if (tipo == 'h')
        return 3 / (1 / a + 1 / b + 1 / c);
    return 0;
}

int main(int argc, char const *argv[])
{
    double nota1, nota2, nota3;
    scanf("%lf%lf%lf", &nota1, &nota2, &nota3);

    printf("Media aritmetica %.2f\n", media(nota1, nota2, nota3, 'a'));
    printf("Media ponderada %.2f\n", media(nota1, nota2, nota3, 'p'));
    printf("Media harmonica %.2f\n", media(nota1, nota2, nota3, 'h'));

    // char tipo;
    // scanf(" %c", &tipo);
    // printf("Media %.2f\n", media(nota1, nota2, nota3, tipo));

    return 0;
}
