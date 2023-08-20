#include <stdio.h>

int main(){
    int num, cont=0, valor=1;
    printf("digite um numero: ");
    scanf("%d", &num);

    while(cont < num){
        if(valor % 2 != 0){
            printf("%d ", valor);
            cont += 1;
        }
        valor++;
    }
}