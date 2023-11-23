#include <stdio.h>

int main(){
    int num1, num2;
    float res;

    printf("Digite o num1: \n");
    scanf("%d", &num1);
    printf("Digite o num2: \n");
    scanf("%d", &num2);

    //soma (+)
    res = num1 + num2;
    printf("A soma e %d\n", (int)res);

    //subtrair (-)
    res = num2 - num1;
    printf("A subtracao e %d\n", (int)res);

    //multiplicar (*)
    res = num1 * num2;
    printf("A multiplicacao e %d\n", (int)res);

    //dividir (/)
    res = (float)num1 / (float)num2;
    printf("A divisao e %f\n", res);

    //elevar ao quadrado (x*x)
    res = num1*num1;
    printf("O quadrado de num1 e %d\n", (int)res);

    //resto (%)
    if (num1 % 2 == 0){
        printf("O num1 e par\n");
    } else{
        printf("O num1 e impar\n");
    }
}

/*
Operações Matemáticas

+ -> Soma
- -> Subtração
* -> Multiplicar
/ -> Divisão
x*x -> Elevando ao quadrado
% -> resto da divisão inteira

*/