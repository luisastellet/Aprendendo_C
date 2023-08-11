#include <stdio.h>

int main(){

    float quilometros;

    printf("Digite uma distancia e quilometros: ");
    scanf("%f", &quilometros);
    printf("Essa distancia em milhas e %f", quilometros/1.61);
}