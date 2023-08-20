#include <stdio.h>

int main(){
    int soma = 0, num = 2, cont = 0;

    while (cont < 50){
        soma += num;
        num += 2;
        cont++;
    }
    printf("A soma dos priemiros 50 numeros pares e %d", soma);
}