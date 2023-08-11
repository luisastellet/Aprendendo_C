#include <stdio.h>

int main(){
    float centimetros;
    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &centimetros);
    printf("Esse comprimento em polegadas e %f", centimetros/2.54);
}