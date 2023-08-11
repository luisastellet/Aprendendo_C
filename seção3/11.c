#include <stdio.h>

int main(){

    float m;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &m);
    printf("Essa velocidade em km/h e %f", m*3.6);
}