#include <stdio.h> // biblioteca

int main(){
    int x; // declaração de variaveis
    printf("Digite sua idade: ");
    scanf("%d", &x); // inserindo valor nas variaveis
    if(x >= 18) // condicao se a idade for maior que 18
        printf("Voce e maior de idade"); // imprimindo o resultado
    else
        printf("Voce e menor de idade"); // imprimindo o resultado
    return 0;
}
