#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    int dado;
    struct Lista *prox;
}Lista;

Lista *insere_posicao(Lista *l1,int dado, int pos){
    Lista *no = (Lista*) malloc(sizeof(Lista));
    Lista *aux = l1;
    Lista *ant = NULL;
    no->dado=dado;
    int pos_atual = 0;

    //primeira posição
    if (pos_atual==pos || l1==NULL){
        no->prox=l1;
        return no;
    }

    //meio
    while(pos_atual!=pos-1 && aux!=NULL){
        aux = aux->prox;
        pos_atual++;
    }
    no->prox=aux->prox;
    return l1;
}
