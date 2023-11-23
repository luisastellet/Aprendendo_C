#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

TLSE * retira(TLSE * l, int x){
    //iniciando o ant em null e o p no l para percorrer a lista e fazer as conexões pós retirada
    TLSE * ant = NULL;
    TLSE * p = l;

    //enquanto p existir e a info não for igual a x, vai andando com ant e com p
    while ((p) && (p -> info != x)){
        //anterior pega o p
        ant = p;
        //p vai pra frente pegar o proximo
        p = p-> prox;
    }

    //se depois disso o p for null, a lista é vazia e retorna o proprio l
    if (!p) return l;
    //se depois disso o anterior for nullo, significa que só tinha um termo q era o proprio x, então nao da pra fazer ant->prox, ai nesse caso a gente só fala q o l vai receber o prox(null)
    if (!ant) l = l->prox; 
    //fazendo a conexão, o anterior-> prox vai pro p-> prox
    else ant -> prox = p -> prox;
    //free no p
    free(p);
    
    //depois d eliberar, retorna o l
    return l;
}