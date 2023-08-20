#include <stdio.h>

int main(){
    int num, centenas=0, dezenas=0, unidades=0;

    printf("digite um numero entre 100 e 999: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999){  
        int centenas = num /100;
        int dezenas = (num % 100) /10;
        int unidades = num % 10;

        printf("centanas: %d\ndezenas: %d\nunidades: %d\n", centenas, dezenas, unidades);
    }
    /*
    123/ 100 ---> 1,23
    123 % 100 --> 23 / 10 ---> 2
    123 % 10 --> 3
    */
}