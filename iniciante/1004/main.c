#include <stdio.h>

int main(){
    // a questao pediu 2 variaveis de valor e uma variavel PROD
    int valor1, valor2, PROD;

    scanf("%d %d", &valor1, &valor2);

    // calculando o produto dos valores e atribuindo a variavel PROD
    PROD = valor1 * valor2;

    // imprimindo resultado
    printf("PROD = %d\n", PROD);
    
    return 0;
}