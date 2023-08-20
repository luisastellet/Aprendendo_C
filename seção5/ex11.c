#include <stdio.h>

int main(){
    int num;

    printf("digite o valor de N: ");
    scanf("%i", &num);

    for(int i = 0; i <= num; i++ ){
        printf("%i ", i);
    }
}