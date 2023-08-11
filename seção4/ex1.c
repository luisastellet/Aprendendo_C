#include <stdio.h>

int main(){
    int x, y;

    printf("Digite X: ");
    scanf("%i", &x);

    printf("Di9gite Y: ");
    scanf("%i", &y);

    if (x > y){
        printf("O maior e o X, %i", x);
    } else if (y > x){
        printf("O maior e o Y, %i", y);
    }
}
