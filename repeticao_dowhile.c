#include <stdio.h>


/*
Utilizada quando você precisa de um loop onde não se tenha um número fixo de elementos mas que tenha um critério de parada e a condição de parada é checada após a primeira execução
*/

// USANDO DO WHILE

int main(){
    //variáveis
    int numero, soma=0;

    //processamento
    do{ // isso é executado primeiro
        //entrada
        printf("informe um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    while (numero != 0); //depois é feita a checagem

    //saída
    printf("A soma e %d", soma);

}