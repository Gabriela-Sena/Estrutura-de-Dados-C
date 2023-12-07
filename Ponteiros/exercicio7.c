#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool contem(char *texto, char *subTexto){
  int tamanho = 0;
  int i = 0, j = 0;

  while(subTexto[tamanho++] != '\0');
  tamanho--;

  while(texto[i] != '\0'){
    if (texto[i++] == subTexto[j])
      j++;
    else
      j = 0;

    if (j == tamanho)
      return true;
  }
  return false;
}

int main(){
  char texto[30] = "What does the Fox say?";
  char subTexto[10] = "Fox";

  bool possui = contem(texto, subTexto);

  if (possui)
    printf("Encontrado\n");
  else
    printf("Não encontrado\n"); 

  // char *p = strstr(texto, subTexto);

  // if (p != NULL)
  //   printf("Encontrado: %s\n", p); // No caso de %s, o ponteiro é incrementado até encontrar o \0, diferente do que ocorre com %c, %d, %f, etc.
  //   // printf("Encontrado: %c\n", *p); // No caso de %s, o ponteiro é incrementado até encontrar o \0, diferente do que ocorre com %c, %d, %f, etc.
  // else
  //   printf("Não encontrado\n"); 

  return 0;
}