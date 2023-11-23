#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <inicializa.c>

typedef struct lse{
    int info;
    struct lse *prox;
} TLSE;

TLSE * ordena (TLSE *l){
    //USANDO O SELECTION SORT
    //iniciando os indexs de ponteiros
    TLSE * p, * q;
    //começa no inicial e vai até p existir
    for(p = l; p; p = p->prox){
        //inicia o pont menor que vai guardar os ponteiros dos menores pwara cada posição
        TLSE * menor = p;
        //começa a partir do próximo do p, pra não olhar repetido
        for(q = p -> prox; q; q = q->prox){
            //se o info do atual for menor, menor recebe o endereço atual (q)
            if(q -> info < menor -> info) menor = q;
        }

        //depois de achar o menor da posiçpão atual de i, faz a troca entre p -> info e o menor -> info, usando um tmp para salvar um dos valores
        if (p != menor){
            int tmp = p -> info;
            p -> info = menor -> info;
            menor -> info = tmp;
        }
    }

    return l;
}

// for(int i=0; i<n-1; i++){
//     menor = i;
//     for(int j=i+1; j<n; j++){
//         if(vet[j] < vet[menor]){
//             menor = j;
//         }
//     }

//     if(i != menor){
//         tmp = vet[menor];
//         vet[i] = tmp;
//         vet[menor] = vet[i];
//     }
// }