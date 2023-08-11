#include <stdio.h>

int main(){
    float kel;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &kel);
    printf("Essa tempartura em Celsius e %f", kel - 273.15);

}