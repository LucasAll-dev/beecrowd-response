#include <stdio.h>
 
int main() {
    // entrada de dados com variaveis de ponto flutuante (dupla precisao) "double"
    double pi = 3.14159;
    double area, raio;

    // entrada com o ponto flutuante raio
    scanf("%lf", &raio);
    
    // formula da area do circulo
    area = pi * (raio * raio);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}