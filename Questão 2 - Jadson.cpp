#include <stdio.h> // biblioteca

int main(){
    float raio; // declaração de variaveis
    printf("Digite o valor do raio: ");
    scanf("%f", &raio); // inserindo valor nas variaveis
    printf("A area do circulo eh: %0.2f", 3.14*(raio*raio)); // imprimindo o resultado
    return 0;
}
