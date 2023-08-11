#include <stdio.h>

int main(){
    float cel, far;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &cel);
    far = cel *(9.0/5.0) + 32.0;
    printf("Essa temperatura em Fahrenheit e %f", far);

}