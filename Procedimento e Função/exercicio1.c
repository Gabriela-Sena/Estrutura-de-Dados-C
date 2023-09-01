#include <stdio.h>
#include <math.h>

double volumeEsfera(double raio){
    // double volume = (4.0/3.0 * 3.14 * raio * raio * raio);
    double volume = (4.0/3.0 * M_PI * pow(raio, 3));
    return volume;
}

int main(){
    double raio;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    printf("Volume: %.3lf\n", volumeEsfera(raio));

    return 0;
}