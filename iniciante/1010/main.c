#include <stdio.h>
 
int main() {
    // a questao pediu um codigo, um numero (quantidade) de peças e um valor
    // "havera 3 valores, dois inteiros e um valor com 2 casas decimais(ponto flutuante)"
    // isso com duas linhas de entrada de dados
    
    int cod1, cod2, quant1, quant2;
    double valor1, valor2, total;
    
    
    // entrar os dados com o scanf
    
    scanf("%d %d %lf", &cod1, &quant1, &valor1);
    scanf("%d %d %lf", &cod2, &quant2, &valor2);
    
    // a questao pediu pra calcular o valor das peças, entao o codigo delas n vai ser usado
    total = (quant1 * valor1) + (quant2 * valor2);
    
    //so printar
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

return 0;
}
