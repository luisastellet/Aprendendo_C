#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

//retorna l pq caso entre na 1° posição, o l irá mudar
TLSE * ins_ordenado(TLSE * l, int x){

    //se a lista for nula ou o x já se encaixa na 1° posição (é menor que o 1° elemento q já tem nele), insere no inicio e retorna esse novo endereço
    if((!l) || (l-> info > x)) return ins_ini(l, x);

    //anterior recebe NULL pq no inicio não existe ngm anterior, ao longo da lista isso muda
    TLSE * ant= NULL;
    //p recebe o atual, para ele apontar pro que vem depois do lugar que eu vou encaixar o x
    TLSE * p = l;

    //enquanto o info atual for menor que o x, vai andando e atualizando ant e p
    while (p -> info <= x){
        ant = p;
        p = p -> prox;
    }

    //maloca o espaço do novo nó
    TLSE * novo = (TLSE*)malloc(sizeof(TLSE));
    //fazendo as ligações:
    //o anterior -> prox vai receber o endereço do novo nó criado
    ant -> prox = novo;
    //o novo -> prox recebe o p
    novo -> prox = p;

    //return l, pq pode ter mudado o 1° elemento
    return l
}