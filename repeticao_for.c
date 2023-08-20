// for: para (quantidade de repetições bem definida)
// while: enquanto (tem critério de parada)
// do.. while: faça enquanto (executa uma vez e depois faz a checagem)


/*
Faça um programa, no qual receba e some 5 números inteiros e apresente a soma no final;
*/

// USANDO O FOR

#include <stdio.h>

int main(){
    // variáveis
    int numero, soma = 0;

    // para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
    // inicio, fim-1, incremento
    for (int i = 0; i < 5; i++){
        // entrada
        printf("informe um numero: ");
        scanf("%i", &numero);

        // processamento
        soma += numero;
    }

    // saída
    printf("A soma e %d", soma);

}