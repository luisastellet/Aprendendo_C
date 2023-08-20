#include <stdio.h>

int main(){
    int num, soma=0;
    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);
    for(int i = 1; i < num+1; i++){
        soma+= i;
    }
    printf("A soma e %d", soma);
}