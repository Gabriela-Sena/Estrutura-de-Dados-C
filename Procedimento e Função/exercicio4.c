#include <stdio.h>
#include <math.h>

void bhaskara(double a, double b, double c){
    double x1, x2;

    double delta = b*b - (4 * a * c);

    if(delta < 0)
        printf("Não possui raizes reais\n");
    else if(delta == 0){
        x1 = -b / (2*a);
        printf("Raiz: %.2f\n", x1);
    }else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raizes \nx1: %.2f \nx2: %.2f\n", x1, x2);
    }
}

int main(int argc, char const *argv[])
{
    bhaskara(1, 8, -9); // delta > 0
    bhaskara(2, -5, -7);
    bhaskara(1, -5, 6);
    bhaskara(2, 4, 2); // delta == 0
    bhaskara(1, -5, 8); // delta < 0
    return 0;
}
