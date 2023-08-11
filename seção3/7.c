#include <stdio.h>

int main(){
    float far, cel;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &far);
    cel = 5.0*(far-32.0)/9.0;
    printf("Essa temperatura em Celsius e %f", cel);

}