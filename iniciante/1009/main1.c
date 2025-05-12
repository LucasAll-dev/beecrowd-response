#include <stdio.h>
// dois arquivos pois colocamos duas maneiras de fazer o codigo
int main(){
    // varialvel do primeiro nome do vendedor, salario fixo, vendas efetuadas, e variavel salario total(opcional) para calculo
    char nome[20];
    double salario, vendas, salarioTotal;

    // entrada dos valores
    scanf("%s %lf %lf", nome, &salario, &vendas );
    
    // calculo do salario total na variavel
    salarioTotal = salario  + (vendas * 0.15);

    // imprimindo com 2 numeros apos o ponto
    printf("TOTAL = R$ %.2lf\n", salarioTotal);

    return 0;
}  
