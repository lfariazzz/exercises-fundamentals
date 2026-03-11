#include <stdio.h>

typedef struct Lista{
    int dado;
    struct Lista *prox;
}Lista
// 1 Questão - (a) Inicializa
Lista *inicializa_lista(void){
    return NULL;
}

// 1 Questão - (b) insere
Lista *insere_lista(Lista *l1, int dado){
    Lista *no = (Lista*) malloc(sizeof(Lista));
    no->dado=dado;
    no->prox=l1;
    return no;
}

// 1 Questão - (c) imprime
void imprime_lista(Lista *l1){
    Lista *aux = l1;
    int contador = 1;
    while (aux!=NULL){
        printf("Elemento %i: %i\n", contador, aux->dado);
        contador++;
        aux=aux->prox;
    }
    return;
}

// 1 Questão - (d) busca
int busca_lista(Lista *l1, int dado){
    Lista *aux=l1;
    while (aux!=NULL){
        if (aux->dado==dado){
            return 1;
        }
        aux=aux->prox;
    }
    return 0;
}

// 1 Questão - (e) remove
Lista *remove_lista(Lista *l1, int dado){
    Lista *aux=l1;
    Lista *ant=NULL;

    //primeiro Elemento
    if(aux!=NULL && aux->dado=dado){
        l1=aux->prox;
        free(aux)
        return l1;
    }

    //meio ou fim
    while(aux!=NULL && aux!=dado){
        ant = aux;
        aux=aux->prox;
    }

    if(aux!=NULL){
        ant -> prox = aux -> prox;
        free(aux);
    }

    return l1;
}

// 1 Questão - (f) libera
Lista *libera_lista(Lista *l1){
    Lista *aux=l1;
    while(l1!=NULL){
        aux=l1->prox;
        free(l1);
        l1=aux;
    }
    return l1
}

