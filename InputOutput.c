/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdio.h>

int main() {
    int num;
    char palavra[10];
    //                                            0   1   2   3   4    5
    // String -> palavra = Luisa ---> palavra = ['L','u','i','s','a','\0']
    
    printf("[Demo tipo print format] Digite um numero entre %.3f e %d\n", 100.0, 999);
    
    printf("[Demo input tipo string] Digite um número inteiro entre 100 e 999: ");
    scanf("%s", palavra);
    
    printf("Digite um número inteiro entre 100 e 999: ");
    scanf("%d", &num);
    
    /*
    and - &&
    or - ||
    */
    
    if (num >= 100 && num <= 999) {
        int centenas = num / 100; // 123 / 100 = 1,23 ---> int 1
        int dezenas = (num % 100) / 10; // 123 % 100 = 23 / 10 = 2,3 ---> int 2
        int unidades = num % 10; // 123 % 10 = 3 ---> int 3
        
        // int centenas = num /100 , dezenas, unidades;
        
        printf("Centenas: %d\n", centenas);
        printf("Dezenas: %d\n", dezenas);
        printf("Unidades: %d\n", unidades);
    } else {
        printf("Número fora do intervalo permitido.\n");
    }    

    return 0;
}
