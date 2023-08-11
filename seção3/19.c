#include <stdio.h>

int main(){
    int litros;
    printf("Digite um volume em litros: ");
    scanf("%i", &litros);
    printf("Esse volume em metros cubicos e %i", 1000*litros);
    
}