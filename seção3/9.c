#include <stdio.h>

int main(){
    float cel;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &cel);
    printf("Essa temperatura em Kelvin e %f", cel + 273.15);
}