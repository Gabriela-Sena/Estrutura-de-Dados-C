
int main(){

int valor = 5; // variável do tipo int
int *inteiro; // ponteiro para int, cria a variavel inteiro junto para receber o valor de memória do ponteiro

inteiro = &valor; // copiando endereço
*inteiro = 10; // atribuindo valor

printf("Inteiro: %d \nEndereco: %p\n", *inteiro, inteiro);

return 0;
}