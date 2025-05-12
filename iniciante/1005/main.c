#include <stdio.h>

int main(){
    // dois valores de ponto flutuante A e B que correspondem a notas de alunos, e variavel media
    double A, B, MEDIA;

    scanf("%lf %lf", &A, &B);

    /* aqui entra a matematica
    a questao diz: A nota do aluno A tem peso de 3.5,
    e a nota B tem peso de 7.5 (a soma tem peso de 11)
    entao vamos multiplicas as notas com seus pesos,
    somar os resultados, e dividi-los por 11. */
    
    MEDIA = (A * 3.5 + B * 7.5) / 11;

    // imprima o valor com 5 digitos apos o ponto
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}