#include <stdio.h>
#include <stdbool.h>

int primo(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;

    return true;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (primo(num))
        printf("Eh numero primo\n");
    else
        printf("Nao eh numero primo");

    return 0;
}
