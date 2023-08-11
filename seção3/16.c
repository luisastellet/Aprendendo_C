#include <stdio.h>

int main(){

    float polegadas;

    printf("Digite um valor de comprimento em polegadas: ");
    scanf("%f", &polegadas);
    printf("Esse comprimento em centimetros e %f", polegadas*2.54);
    
}