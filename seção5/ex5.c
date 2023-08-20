#include <stdio.h>

int main(){
    int num, soma=0;

    for(int i = 0; i < 5; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }
    
    printf("A soma e %d", soma);
}