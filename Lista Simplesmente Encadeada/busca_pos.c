#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

TLSE * busca(TLSE * l, int x){
    //Inicializa o ponteiro p que vai percorrer a liista para não perder o l
    TLSE * p = l;
    //iniciando o índice
    int resp = 0;

    //enquanto o-> existir e p->info for diferente do x, ele continua andando na lista e o p vai indo pro proximo
    while ((p) && (p->info != x)){
        //o p vai andando
        p = p -> prox;
        //incrementa o indice
        resp++;
    }

    //se a lista era vazia ou se não encontrou o x na lista
    if(!p) return -1;

    //retorna o indice de onde está o x
    return resp;
}