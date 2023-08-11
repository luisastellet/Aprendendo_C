#include <stdio.h>

int main(){
    int metros;
    printf("Digite um volume em metros cubicos: ");
    scanf("%i", &metros);
    printf("Esse volume em litros e %i", 1000*metros);
    
}