#include <stdio.h>
#include <math.h>

int main(){
    float num;

    printf("digite um valor real: ");
    scanf("%f", &num);
    
    if (num > 0){
        printf("esse numero ao quadrado e %.1f", num*num);
        printf("a raiz desse numero e %.1f", sqrt(num));
    }
    
}