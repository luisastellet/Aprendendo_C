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
    //Se a lista for vazia, pode retornar null ou o próprio l que já é null
    if(!l) return l;

    //enquanto o-> existir e p->info for diferente do x, ele continua andando na lista e o p vai indo pro proximo
    while ((p->prox) && (p->info != x)) p = p -> prox;
    //depois disso, verificamos se o p que terminou -> info é igual ao x
    // se for igual, retorna o p pq achou o termo x
    // se for diferente, retorna NULL pq não achou o termo x
    if(p -> info == x) return p;
    return NULL;
}

//Código da Rosseti:

// TLSE * busca(TLSE * l, int x){
//     TLSE * p = l;
//     while ((p) && (p->info != x)) p = p -> prox;
//     return p;
// }
