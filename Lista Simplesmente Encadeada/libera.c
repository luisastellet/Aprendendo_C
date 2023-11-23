#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;


void libera(TLSE * l){
    TLSE * p;

    //o l ta semprer apontando um mais na frente, para poder liberar o anterior e o inicio da lista ir se aproximando do null
    while(l){
        //a cadea rodada o p precisa receber o l para ir continuando
        //pq não pode p=p->prox? pq quando vc da free(p) vc perde a relação de prox, ele só vira um nada
        p = l;
        //l vai andando pro proximo, o inicio da lista vai indo mais pra direita
        l = l->prox;
        //free no anterior, no p
        free(p);
    }
}