#include <stdio.h>

int main(){
    float n1, n2;

    printf("digite a n1: ");
    scanf("%f", &n1);
    printf("digite a n2: ");
    scanf("%f", &n2);

    if ((n1+n2)/2 > 0.0 && (n1+n2)/2 < 10.0){
        printf("media valida");
    }else {
        printf("media invalida");
    }
}