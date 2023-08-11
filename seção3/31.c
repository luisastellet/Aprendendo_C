#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Seu antecessor e %i e seu sucessor e %i", num-1, num+1);
}