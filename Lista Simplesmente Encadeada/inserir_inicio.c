#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

TLSE * ins_ini(TLSE * l, int x){
    //alocando espaço para o novo nó
    TLSE * novo = (TLSE*)malloc(sizeof(TLSE));
    //povoando com a info
    novo -> info = x;
    //criando o pont do proximo para receber o antigo l (endereço do priemiro nó)
    novo -> prox = l;

    //retorno pro l o endereço do novo nó, pois será o priemiro da lista
    return novo;                                                                                                     
}

int main(){
    TLSE * l = inicializa();
    int x;

    printf("Digite a info que deseja inserir: ");
    scanf("%d", &x);

    //l recebe o endereço do novo nó
    l = ins_ini(l, x);

    return 0;
}