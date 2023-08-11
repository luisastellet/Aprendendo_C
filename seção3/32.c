#include <stdio.h>

int main(){
    int num, ant, suc;

    printf("Digite um numero: ");
    scanf("%i", &num);

    suc = num*3 + 1;
    ant = num*2 - 1;

    printf("A soma e %i", suc+ant);
}