#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    float b = 5;
    char c = 'a';
    int *pa = &a;
    float *pb = &b;
    char *pc = &c;

    printf("A: %-5d B: %-5.1f C: %c\n", a, b, c);

    *pa = 20;
    *pb = 55.5;
    *pc = 'c';

    printf("A: %-5d B: %-5.1f C: %c\n", a, b, c);
    return 0;
}
