#include <stdio.h> // biblioteca

int main(){
    int x; // declaração de variaveis
    printf("Digite um numero: ");
    scanf("%d", &x); // inserindo valor nas variaveis
    printf("Tabuada de %d\n", x);
    for(int i = 1; i<=10; i++) // laço de repetição para fazer a tabuada
        printf("%d * %d = %d\n", x, i, x*i); // imprimindo o resultado
    return 0;
}
