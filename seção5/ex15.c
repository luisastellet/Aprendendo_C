#include <stdio.h>

int main(){
    int num;

    printf("digite um numero inteiro positivo impar: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i+=2){
        printf("%d ", i);
    }
}