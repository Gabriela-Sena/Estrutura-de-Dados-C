#include <stdio.h>

char conceito(double media){
    if(media <= 4.9)
        return 'D';
    if(media <= 6.9)
        return 'C';
    if(media <= 8.9)
        return 'B';
    if(media <= 10)
        return 'A';
    return 'E';
}

int main(int argc, char const *argv[])
{
    double media;
    printf("Digite a media: ");
    scanf("%lf", &media);

    printf("Conceito: %c\n", conceito(media));
    return 0;
}
