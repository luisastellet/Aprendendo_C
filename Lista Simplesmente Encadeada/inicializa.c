#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct lse{
    int info;
    struct lse *prox;
}TLSE;

TLSE * inicializa(void){
    //o ponteiro do primeiro bloco n aponta pra ninguém, é null
    return NULL;
}

int main(){
    //o l tá recebendo o endereço reservado
    TLSE * l = inicializa();

    return 0;
}