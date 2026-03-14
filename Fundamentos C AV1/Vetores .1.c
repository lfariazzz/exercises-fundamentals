#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
   int dado;
   struct Lista *prox;
}Lista;

Lista* inicializa_lista(void){
   return NULL;
}

Lista* insere_primeiro_no(int dado){
   Lista *no = (Lista *) malloc(sizeof(*no));
   no->dado=dado;
   no->prox=NULL;
   return no;
}

Lista* remove_primeiro_no(Lista *l1){
    Lista *aux;
    aux = l1;
    l1=l1->prox;
    free(aux);
    return l1;
}

int calcula_tamanho(Lista *l1){
    int contador = 0;
    while(l1!=NULL){
    l1=l1->prox;
    contador++;
    }
    return contador;
}

int main(){
    Lista *l1 = inicializa_lista();
    printf("%i", calcula_tamanho(l1));
}
