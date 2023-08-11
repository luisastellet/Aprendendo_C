#include <stdio.h>

int main(){
    int n1, n2;

    printf("digite n1: ");
    scanf("%i", &n1);
    printf("digite n2: ");
    scanf("%i", &n2);

    if (n1 > n2){
        printf("%i e o maior dos dois. \n", n1);
        printf("A diferenca entre eles e %i", n1-n2);
    }else {
        printf("%i e o maior dos dois. \n", n2);
        printf("A diferenca entre eles e %i", n2-n1);
    }
}