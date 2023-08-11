#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%i", &num);
    
    if (num > 0){
        printf("%.1f", sqrt(num));
    }else {
        printf("%d", num*num);
    }

}