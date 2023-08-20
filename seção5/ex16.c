#include <stdio.h>

int main(){
    int num;

    printf("digite um numero inteiro positivo impar: ");
    scanf("%d", &num);

    for(int i = num; i >= 1; i-=2){
        printf("%d ", i);
    }
}