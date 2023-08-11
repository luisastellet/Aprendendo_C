#include <stdio.h>

int main(){

    float milhas;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &milhas);
    printf("Essa distancia em quilometros e %f", 1.61 * milhas);
}