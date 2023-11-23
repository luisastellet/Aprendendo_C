#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

TLSE * ins_fim(TLSE *l, int x){

    //criando um ponteiro para andar na lista e n perder o l
    TLSE * p = l;

    //se a liksta for vazia, coloca no início e o l recebe o pont novo
    if (!l) l = ins_ini(l,x);

    //enquanto houver p->prox
    while (p->prox) p = p -> prox;
    //malloc do nó novo q será inserido no fim
    TLSE * novo = (TLSE*)malloc(sizeof(TLSE));
    //colocando o x no nó
    novo -> info = x;
    // o antigo -> prox vai apontar pro pont novo
    p -> prox = novo;
    // o nó novo -> prox vai apontar pro null, indicando que acabou a lista
    novo -> prox = NULL;

    //caso seja vazia, o l vai ter mudado, vai receber o pont novo, ent precisa retornar l para esses casos
    return l 
}