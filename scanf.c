#include <stdio.h>

int main(){

    int base;
    int altura;
    int area;

    printf("Digite a base do triangulo: ");
    scanf("%i", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%i", &altura);

    area = base * altura / 2;

    printf("A area do triangulo e %i", area);

    return 0;

}

/*
O scanf é usado para receber um dado do usuário
*/