#include <stdio.h>

int main(){
    int num;

    printf("digite o valor de N: ");
    scanf("%d", &num);

    for(int i = num; i >= 0; i--){
        printf("%d ", i);
    }

}