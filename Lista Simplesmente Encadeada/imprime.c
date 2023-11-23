#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

//a função é void pq já imprime, não precisa retornar nada
void imprime(TLSE * l){
    //criando o p para não perder o início
    TLSE * p = l;

    //enquanto p existir, printa o que tem nele e vai pro prox
    while(p){
        printf("%d ", p->info);
        p = p->prox;
    }
}