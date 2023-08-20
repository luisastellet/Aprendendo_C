#include <stdio.h>

int main(){
    int par;

    printf("digite um numero par: ");
    scanf("%d", &par);

    for(int i = 0; i <= par; i+=2){
        printf("%d ", i);
    }
}