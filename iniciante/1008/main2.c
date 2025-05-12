#include <stdio.h>
// dois arquivos de codigos, pois colocamos duas maneiras diferentes de fazer a questão
int main(){
    /* de acordo com a questão, temos 4 variaveis:
    2 inteiras, 1 com numeros decimais. 
    */
    int numFuncionario, hrsTrab;
    double salario;

    // entrando com valores
    scanf("%d %d %lf", &numFuncionario, &hrsTrab, &salario);

    /* imprimindo com conta do salario feita dentro do printf.
    aqui apenas formatei como tem os exemplos de saida do site
    lembrado que o salario precisa ter U$ antes do valor */
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numFuncionario, (salario * hrsTrab));
    return 0;
}