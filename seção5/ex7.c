#include <stdio.h>

int main(){
    int num, soma=0, cont=0;

    for(int i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num > 0){
            soma += num;
            cont ++;
        }    
    }

    printf("A media com %d valores positivos e %d", cont, soma/cont);
}