#include <stdio.h> // biblioteca

int main(){
    char nome[20];
    int idade; // declaração de variaveis
    printf("Digite seu nome e sua idade: ");
    scanf("%s %d", nome, &idade); // inserindo valor nas variaveis
    printf("Ola %s", nome); // imprimindo o resultado
    return 0;
}
