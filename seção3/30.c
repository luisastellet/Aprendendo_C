#include <stdio.h>

int main(){
    float real, dolar;

    printf("Digite um valor em real: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dolar);

    printf("Voce tem %f dolares",real/dolar);
}