#include <stdio.h>

int main(){
    // leia 4 valores inteiros A, B, C, D, e use  a formula DIFERENÇA. Aqui temos 5 variaveis
    int A, B, C, D, DIFERENCA;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    // usand formula do produto da diferença
    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}