#include <stdio.h>
// dois arquivos de codigos, pois colocamos duas maneiras diferentes de fazer a questão
int main(){
    /* de acordo com a questão, temos 4 variaveis:
    2 inteiras, 1 com numeros decimais. 
    Mas a questao tbm diz q tem q calcular o valor total,
    podemos colocar isso como outra variavel double (nao obrigatorio)
    assim totalizando 2 int, e 2 double.
    */
    int numFuncionario, hrsTrab;
    double salario, salarioTotal;

    // entrando com valores
    scanf("%d %d %lf", &numFuncionario, &hrsTrab, &salario);

    // calculando o salario total com variavel adcional
    salarioTotal = salario * hrsTrab;

    /* aqui apenas formatei como tem os exemplos de saida do site
    lembrado que o salario precisa ter U$ antes do valor */
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numFuncionario, salarioTotal);
    return 0;
}