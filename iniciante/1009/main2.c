#include <stdio.h>
// dois arquivos pois colocamos duas maneiras de fazer o codigo
int main(){
    // varialvel do primeiro nome do vendedor, salario fixo, vendas efetuadas
    char nome[20];
    double vendas, salario;

    // entrada dos valores
    scanf("%s %lf %lf", nome, &salario, &vendas );

    // imprimindo valor total com a conta fenta dentro do printf
    printf("TOTAL = R$ %.2lf\n", (salario  + (vendas * 0.15)));

    return 0;
}  
