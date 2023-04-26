#include <stdio.h> // biblioteca

int main(){
    int x; // declaração de variaveis
    printf("Digite um numero: ");
    scanf("%d", &x); // inserindo valor nas variaveis
    if(x % 2 == 0) // condição se for par ou impar
        printf("O valor e par"); // imprimindo o resultado
    else
        printf("O valor e impar"); // imprimindo o resultado
    return 0;
}
