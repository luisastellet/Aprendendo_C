#include <stdio.h>

int main(){
    int idade, idade_nova;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    idade_nova = idade + 1;
    printf("Daqui um ano voce tera %d anos.", idade_nova);
}