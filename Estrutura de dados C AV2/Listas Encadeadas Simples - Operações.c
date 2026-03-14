#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    int dado;
    struct Lista *prox;
}Lista;

Lista *inicializa_lista(void){
    return NULL;
}

Lista *insere_lista_inicio(Lista *l1, int dado){
    Lista *no = (Lista*) malloc(sizeof(Lista));
    no->dado=dado;
    no->prox=l1;
    return no;
}

Lista *insere_lista_final(Lista *l1, int dado){
    Lista *no = (Lista*) malloc(sizeof(Lista));
    Lista *aux=l1;
    no->dado=dado;
    no->prox=NULL;
    while(aux->prox!=NULL){
        aux=aux->prox;
    }
    aux->prox=no;
    return l1;
}

void imprime_lista(Lista *l1){
    Lista *aux = l1;
    int contador = 0;
    while(aux!=NULL){
        printf("Elemento %i: %i\n", contador, aux->dado);
        aux=aux->prox;
        contador++;
    }
}

int busca_lista(Lista *l1, int dado){
    Lista *aux = l1;
    while(aux!=NULL){
        if(aux->dado==dado){
            return 1;
        }
        aux=aux->prox;
    }
    return 0;
}

Lista *remove_lista(Lista *l1, int dado){
    Lista *aux=l1;
    Lista *ant=NULL;
    //Primeiro elemento
    if(aux->dado==dado){
        l1=aux->prox;
        free(aux);
        return l1;
    }

    //Meio e último elemento
    while(aux!=NULL && aux->dado!=dado){
        ant=aux;
        aux=aux->prox;
    }
    if(aux!=NULL){
        ant->prox=aux->prox;
        free(aux);
    }
    return l1;
}

Lista *libera_lista(Lista *l1){
    Lista *aux = l1;
    while(aux!=NULL){
        free(l1);
        aux=aux->prox;
        l1 = aux;
    }
    return l1;
}

int main(){
    Lista *l1;
    l1=inicializa_lista();
    l1=insere_lista_inicio(l1, 1);
    l1=insere_lista_final(l1, 2);
    l1=insere_lista_final(l1, 3);
    imprime_lista(l1);
    printf("\n");
    printf("%i\n", busca_lista(l1, 5));
    l1=insere_lista_final(l1, 5);
    printf("%i\n", busca_lista(l1, 5));
    l1=remove_lista(l1, 5);
    l1=remove_lista(l1, 2);
    imprime_lista(l1);
    l1=libera_lista(l1);
    if(l1==NULL){
        printf("NULL");
    }
}
