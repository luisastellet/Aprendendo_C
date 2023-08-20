#include <stdio.h>

/*
Utilizado quando você precisa de um loop onde se tenha um número fixo de elementos, mas que tenha um critério de parada e antes de iniciar o loop a condição é checada
*/

// faça um programa no qual recebe e soma numneros inteiros até que o numero de entrada seja 0 e apresente a soma no final

// USANDO O WHILE

int main(){
    int numero, soma=0;

    //entrada
    printf("informe um numero: ");
    scanf("%d", &numero);

    //processamento
    while (numero != 0){
        soma += numero;
        printf("informe um numero: ");
        scanf("%d", &numero);
    }

    //saída
    printf("A soma e %d", soma);

}