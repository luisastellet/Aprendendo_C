#include <stdio.h>

int main(){
    int num;

    printf("digite um numero inteiro positivo par: ");
    scanf("%d", &num);

    for(int i = num; i >= 0; i-=2){
        printf("%d ", i);
    }
}