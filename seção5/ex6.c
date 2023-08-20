#include <stdio.h>

int main(){
    int num, soma=0;
    for(int i=0; i<10; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("A media e %d", soma/10);
}