#include <stdio.h>

// matrizes - parte 1

// array multi-dimensionais
//char [3][50]; 3 nomes de 49 caracteres cada (lembrar q o último espaço é vazio)

/*
int numero[5][5];
[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]
*/

int main(){
    char nome[3][50];

    for(int i = 0; i < 3; i++){
        printf("Digite seu nome: ");
        gets(nome[i]); //scanf("%s", &nome[i]); ???
    }

    for(int i = 0; i < 3; i++){
        printf("Ola, %s!\n", nome[i]);
    }

}