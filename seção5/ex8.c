#include <stdio.h>

int main(){
    int num, maior=-1, menor=100000000, i=0;

    while(i < 10){
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num < menor){
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
        i++;
    }
    printf("O menor valor e %d e o maior valor e %d", menor, maior);
}