#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    if(&a > &b)
        printf("Endereço de A é maior: %p\n", &a);
    else
        printf("Endereço de B é maior: %p\n", &b);

    return 0;
}
