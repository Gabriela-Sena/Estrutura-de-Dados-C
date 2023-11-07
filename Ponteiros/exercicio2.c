#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"portuguese");

int valor1=7;
int *a;
float valor2=2.5;
float *b;
char valor3='g';
char *c;

a = &valor1;
b = &valor2;
c = &valor3;

printf("Inteiro: %d \nEndereco: %p\n", *a, a);
printf("Float: %f \nEndereco: %p\n", *b, b);
printf("Char: %c \nEndereco: %p\n", *c, c);

printf("Digite os novos valores para as variaveis Char Inteiro e Float respectivamente:");
scanf("%c",valor3);
scanf("%d",valor1);
scanf("%f",valor2);
printf("----------------");

printf("Inteiro: %d \nEndereco: %p\n", *a, a);
printf("Float: %f \nEndereco: %p\n", *b, b);
printf("Char: %c \nEndereco: %p\n", *c, c);

}

/*Escreva um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real, e char. Associe as variáveis aos 
ponteiros (use &). Modifique os valores de cada variável usando os 
ponteiros. Imprima os valores das variáveis antes e após a modificação.*/