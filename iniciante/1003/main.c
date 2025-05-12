#include <stdio.h>

int main(){
    // apenas um calculo simples, aqui nao precisamos de explicação
    int A, B, SOMA;

    scanf("%d %d", &A ,&B);
    
    SOMA = A + B;

    // lembrar de colocar os espaços caso a saida pedir, e sempre com \n
    printf("SOMA = %d\n", SOMA);

    return 0;
}