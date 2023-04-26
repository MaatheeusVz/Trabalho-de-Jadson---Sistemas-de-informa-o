#include <stdio.h> // biblioteca

int main(){
    int x, y; // declaração de variaveis
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y); // inserindo valor nas variaveis
    printf("A soma dos dois numeros: %d", x + y); // imprimindo o resultado
    return 0;
}
