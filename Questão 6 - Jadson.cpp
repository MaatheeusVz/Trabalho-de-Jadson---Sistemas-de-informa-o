#include <stdio.h> // biblioteca

int main(){
    float x; // declara��o de variaveis
    printf("Digite um numero: ");
    scanf("%f", &x); // inserindo valor nas variaveis
    printf("A sua parte inteira e: %d", (int) x); // imprimindo o resultado
    return 0;
}
