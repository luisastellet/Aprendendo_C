#include <stdio.h>

int main(){
    int quant, cont=0, maior=0, num;

    printf("quantos numeros a serem lidos? ");
    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        printf("digite um numero: ");
        scanf("%d", &num);

        if (num > maior){
            maior = num;
            cont++;
        }
    }
    printf("O maior e %d\n", maior);
    printf("Um numero maior foi lido %d vezes",cont);
}