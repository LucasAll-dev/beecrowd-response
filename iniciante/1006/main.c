#include <stdio.h>

int main(){
    // essa questao é a mesma logica da anterior, entao nao tera explicação da logica matematica
    // variaveis A, B, C e MEDIA com valor de dupla precisao
    double A, B, C, MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);

    MEDIA = (A * 2 + B * 3 + C * 5) / 10;

    // aqui apenas com um digito de casa decimal
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}