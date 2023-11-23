#include <stdio.h>
//Tipos de dados
//Booleanos (Verdadeiro/Falso)  true/false
/*
Na linguagem C, não existe um tipo de dado boolean

Mas, a linguagem C reconhece 0 como Falso e qualquer valor diferente disso, como True
*/

int main(){
    int booleano = 0;

    if (booleano){
        printf("Verdadeiro");
    } else{
        printf("Falso");
    }
    return 0;
}