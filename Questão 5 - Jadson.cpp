#include <stdio.h> // biblioteca

int main(){
    int x; // declaração de variaveis
    printf("Digite um numero: ");
    scanf("%d", &x); // inserindo valor nas variaveis
    printf("O antecessor do numero e: %d", x-1); // imprimindo o resultado
    printf("\nO sucessor do numero e: %d", x+1); // imprimindo o resultado
    return 0;
}
