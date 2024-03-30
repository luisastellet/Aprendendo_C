#include <stdio.h>

int main(){
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Sua idade e %d \n", idade);

    if (idade < 18){
        printf("Voce e menor de idade");
    } else if (idade >= 18 && idade < 60){
        printf("Voce e adulto");
    } else {
        printf("Voce e idoso");
    }

}