/*
Na linguagem C não existe o tipo de dao String

Ex: String
"alewdkerfm  nr k vmkrf klimr";

Ex: Caractere
's';
*/

#include <stdio.h>

int main(){
    char nome[50]; //49 caracteres

    printf("Qual e o seu nome? ");
    gets(nome);

    printf("Seu nome e %s", nome);
}