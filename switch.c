#include <stdio.h>
// Usamos em casos onde tenhamos uma estrutura grande ou confusa de if/else/else if

/*
Switch (variável)
    Case valor1:
        Intruções;
        break;
    Case valor2:
        Instruções;
        break;
    ...
    Default:
        Instruções;
*/

int main(){
    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%i", &valor);

    switch (valor){
        case 1:
            printf("Segunda\n");
            break;
        case 2:
            printf("Terca\n");
            break;
        case 3:
            printf("Quarta\n");
            break;
        case 4:
            printf("Quinta\n");
            break;
        case 5:
            printf("Sexta\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("valor invalido\n");
    }
}

/*
o Switch serve para substituir muitos ifs e elses, vc cria cases e depoisum default para casos que não se encaixam em nada. |cada caso deve ser seguido de um break
*/