#include <stdio.h> // biblioteca

int main(){
    float x, y, z; // declaração de variaveis
    printf("Digite tres numero: ");
    scanf("%f %f %f", &x, &y, &z); // inserindo valor nas variaveis
    printf("A media desses 3 numeros e: %0.2f", (x+y+z)/3); // imprimindo o resultado
    return 0;
}
