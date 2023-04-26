#include <stdio.h> // biblioteca

int main(){
    float x; // declaração de variaveis
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &x); // inserindo valor nas variaveis
    printf("A temperatura em fahrenheit e: %.2f", x*1.8+32); // imprimindo o resultado
    return 0;
}

