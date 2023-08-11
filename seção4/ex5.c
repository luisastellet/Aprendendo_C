#include <stdio.h>

int main(){
    int num;

    printf("digite um numero: ");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("PAR");

    }else {
        printf("IMPAR");
    }
    
}